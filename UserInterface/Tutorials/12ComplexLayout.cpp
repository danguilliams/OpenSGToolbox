// OpenSG Tutorial Example: Creating a complex Layout
//
// This tutorial gives an example of creating a complex Scene
// Layout with multiple Buttons, Borders, and Panels
// 
// Includes: Containers, Layouts, Borders, and Backgrounds


// GLUT is used for window handling
#include <OpenSG/OSGGLUT.h>

// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// Methods to create simple geometry: boxes, spheres, tori etc.
#include <OpenSG/OSGSimpleGeometry.h>

// The GLUT-OpenSG connection class
#include <OpenSG/OSGGLUTWindow.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGGroup.h>
#include <OpenSG/OSGViewport.h>
#include <OpenSG/Input/OSGWindowAdapter.h>

// The general scene file loading handler
#include <OpenSG/OSGSceneFileHandler.h>

// Input
#include <OpenSG/Input/OSGWindowUtils.h>

// UserInterface Headers
#include <OpenSG/UserInterface/OSGUIForeground.h>
#include <OpenSG/UserInterface/OSGUIDrawingSurface.h>
#include <OpenSG/UserInterface/OSGGraphics2D.h>
#include <OpenSG/UserInterface/OSGLookAndFeelManager.h>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;

bool ExitApp = false;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2s Size);

// 12ComplexLayout Headers
#include <OpenSG/UserInterface/OSGButton.h>
#include <OpenSG/UserInterface/OSGLabel.h>
#include <OpenSG/UserInterface/OSGLineBorder.h>
#include <OpenSG/UserInterface/OSGAbsoluteLayout.h>
#include <OpenSG/UserInterface/OSGAbsoluteLayoutConstraints.h>
#include <OpenSG/UserInterface/OSGBoxLayout.h>
#include <OpenSG/UserInterface/OSGFlowLayout.h>
#include <OpenSG/UserInterface/OSGContainer.h>
#include <OpenSG/UserInterface/OSGPanel.h>
#include <OpenSG/UserInterface/OSGFrame.h>
#include <OpenSG/UserInterface/OSGLineBorder.h>
#include <OpenSG/UserInterface/OSGEmptyBorder.h>
#include <OpenSG/UserInterface/OSGEtchedBorder.h>
#include <OpenSG/UserInterface/OSGUIDefines.h>
#include <OpenSG/UserInterface/OSGColorUIBackground.h>
#include <OpenSG/UserInterface/OSGGradientUIBackground.h>
#include <OpenSG/UserInterface/OSGCompoundUIBackground.h>

class TutorialWindowListener : public WindowAdapter
{
public:
    virtual void windowClosing(const WindowEvent& e)
    {
        ExitApp = true;
    }

    virtual void windowClosed(const WindowEvent& e)
    {
        ExitApp = true;
    }
};


int main(int argc, char **argv)
{
     // OSG init
    osgInit(argc,argv);
    
    // Set up Window
    WindowEventProducerPtr TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();
    
    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

    //Add Window Listener
    TutorialWindowListener TheTutorialWindowListener;
    TutorialWindowEventProducer->addWindowListener(&TheTutorialWindowListener);


    // Make Torus Node (creates Torus in background of scene)
    NodePtr TorusGeometryNode = makeTorus(.5, 2, 16, 16);

    // Make Main Scene Node
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
    {
        scene->setCore(osg::Group::create());
 
        // Add the Torus as a Child
        scene->addChild(TorusGeometryNode);
    }
    endEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    // Create the Graphics
    GraphicsPtr TutorialGraphics = osg::Graphics2D::create();

    // Initialize the LookAndFeelManager to enable default 
    // settings for the Button
    LookAndFeelManager::the()->getLookAndFeel()->init();

    
    /******************************************************
            
            Create some Backgrounds

    ******************************************************/
    ColorUIBackgroundPtr MainFrameBackground = osg::ColorUIBackground::create();
    ColorUIBackgroundPtr panelBackground = osg::ColorUIBackground::create();
    ColorUIBackgroundPtr panelSmallBackground = osg::ColorUIBackground::create();
    ColorUIBackgroundPtr label1Color = osg::ColorUIBackground::create();
    GradientUIBackgroundPtr label1Gradient = osg::GradientUIBackground::create();
    CompoundUIBackgroundPtr label1Compound = osg::CompoundUIBackground::create();
    
    beginEditCP(MainFrameBackground, ColorUIBackground::ColorFieldMask);
        MainFrameBackground->setColor(Color4f(0,0,1.0,0.5));
    endEditCP(MainFrameBackground, ColorUIBackground::ColorFieldMask);

    beginEditCP(panelBackground, ColorUIBackground::ColorFieldMask);
        panelBackground->setColor(Color4f(0.0,0.0,0.0,0.5));
    endEditCP(panelBackground, ColorUIBackground::ColorFieldMask);

    beginEditCP(panelSmallBackground, ColorUIBackground::ColorFieldMask);
        panelSmallBackground->setColor(Color4f(0.0,0.5,0.7,1.0));
    endEditCP(panelSmallBackground, ColorUIBackground::ColorFieldMask);
    
    beginEditCP(label1Color, ColorUIBackground::ColorFieldMask);
        label1Color->setColor(Color4f(0.0, 0.0, 0.0, 1.0));
    endEditCP(label1Color, ColorUIBackground::ColorFieldMask);
    
    beginEditCP(label1Gradient, GradientUIBackground::ColorStartFieldMask | GradientUIBackground::ColorEndFieldMask | GradientUIBackground::AlignmentFieldMask);
        label1Gradient->setColorStart(Color4f(1.0, 0.0, 1.0, 0.8));
        label1Gradient->setColorEnd(Color4f(0.0, 0.0, 1.0, 0.3));
        label1Gradient->setAlignment(HORIZONTAL_ALIGNMENT);
    endEditCP(label1Gradient, GradientUIBackground::ColorStartFieldMask | GradientUIBackground::ColorEndFieldMask | GradientUIBackground::AlignmentFieldMask);
    
    beginEditCP(label1Compound, CompoundUIBackground::BackgroundsFieldMask);
        label1Compound->getBackgrounds().addValue(label1Color);
        label1Compound->getBackgrounds().addValue(label1Gradient);
    endEditCP(label1Compound, CompoundUIBackground::BackgroundsFieldMask);

    /******************************************************
            
            Create some Borders

    ******************************************************/
    EtchedBorderPtr panelBorder = osg::EtchedBorder::create();
    EmptyBorderPtr label1Border = osg::EmptyBorder::create();
    beginEditCP(panelBorder, EtchedBorder::HighlightFieldMask | EtchedBorder::ShadowFieldMask | EtchedBorder::WidthFieldMask);
        panelBorder->setHighlight(Color4f(1.0, 1.0, 1.0, 1.0));
        panelBorder->setShadow(Color4f(0.8, 0.8, 0.8, 1.0));
        panelBorder->setWidth(6);
    endEditCP(panelBorder, EtchedBorder::HighlightFieldMask | EtchedBorder::ShadowFieldMask | EtchedBorder::WidthFieldMask);

    /******************************************************
            
                Creates some Button components

    ******************************************************/

    LabelPtr label1 = osg::Label::create();
    ButtonPtr button1 = osg::Button::create();
    ButtonPtr button2 = osg::Button::create();
    ButtonPtr button3 = osg::Button::create();
    ButtonPtr button4 = osg::Button::create();
    ButtonPtr button5 = osg::Button::create();
    ButtonPtr button6 = osg::Button::create();
    ButtonPtr button7 = osg::Button::create();
    ButtonPtr button8 = osg::Button::create();
    ButtonPtr button9 = osg::Button::create();
    ButtonPtr button10 = osg::Button::create();
    ButtonPtr button11 = osg::Button::create();


    beginEditCP(label1, Component::PreferredSizeFieldMask | Component::BackgroundFieldMask | Component::BorderFieldMask);
        label1->setPreferredSize(Vec2s(800, 50));
        label1->setBackground(label1Compound);
        label1->setBorder(label1Border);
    endEditCP(label1, Component::PreferredSizeFieldMask | Component::BackgroundFieldMask | Component::BorderFieldMask);

    beginEditCP(button1, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);
        button1->setPreferredSize(Vec2s(800, 50));
        button1->setMaxSize(Vec2s(50, 50));
        button1->setText("Resize the Window to Show Diificulties with Using Just One Layout");
    endEditCP(button1, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);

    beginEditCP(button2, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);
        button2->setPreferredSize(Vec2s(50, 50));
        button2->setMaxSize(Vec2s(50, 50));
    endEditCP(button2, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);
    
    beginEditCP(button3, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);
        button3->setPreferredSize(Vec2s(50, 50));
        button3->setMaxSize(Vec2s(50, 50));
    endEditCP(button3, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);

    beginEditCP(button4, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);
        button4->setPreferredSize(Vec2s(100, 50));
        button4->setMaxSize(Vec2s(100, 50));
    endEditCP(button4, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);

    beginEditCP(button5, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);
        button5->setPreferredSize(Vec2s(100, 50));
        button5->setMaxSize(Vec2s(100, 50));
    endEditCP(button5, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);

    beginEditCP(button6, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);
        button6->setPreferredSize(Vec2s(100, 50));
        button6->setMaxSize(Vec2s(100, 50));
    endEditCP(button6, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);

    beginEditCP(button7, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);
        button7->setPreferredSize(Vec2s(100, 50));
        button7->setMaxSize(Vec2s(100, 50));
    endEditCP(button7, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);

    beginEditCP(button8, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);
        button8->setPreferredSize(Vec2s(100, 50));
        button8->setMaxSize(Vec2s(100, 50));
    endEditCP(button8, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);

    beginEditCP(button9, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);
        button9->setPreferredSize(Vec2s(100, 50));
        button9->setMaxSize(Vec2s(100, 50));
    endEditCP(button9, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);

    beginEditCP(button10, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);
        button10->setPreferredSize(Vec2s(100, 50));
        button10->setMaxSize(Vec2s(100, 50));
    endEditCP(button10, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);

    beginEditCP(button11, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);
        button11->setPreferredSize(Vec2s(100, 50));
        button11->setMaxSize(Vec2s(100, 50));
    endEditCP(button11, Component::PreferredSizeFieldMask | Component::MaxSizeFieldMask | Button::TextFieldMask);

    /******************************************************

            Create some Layouts

    ******************************************************/
    FlowLayoutPtr MainFrameLayout = osg::FlowLayout::create();
    BoxLayoutPtr panel1Layout = osg::BoxLayout::create();
    BoxLayoutPtr panel2Layout = osg::BoxLayout::create();
    BoxLayoutPtr panel3Layout = osg::BoxLayout::create();
    BoxLayoutPtr panel4Layout = osg::BoxLayout::create();
    BoxLayoutPtr panel5Layout = osg::BoxLayout::create();
    BoxLayoutPtr panel6Layout = osg::BoxLayout::create();

    beginEditCP(panel1Layout, BoxLayout::AlignmentFieldMask);
        panel1Layout->setAlignment(VERTICAL_ALIGNMENT);
    endEditCP(panel1Layout, BoxLayout::AlignmentFieldMask);

    beginEditCP(panel2Layout, BoxLayout::AlignmentFieldMask);
        panel2Layout->setAlignment(VERTICAL_ALIGNMENT);
    endEditCP(panel2Layout, BoxLayout::AlignmentFieldMask);

    beginEditCP(panel3Layout, BoxLayout::AlignmentFieldMask);
        panel3Layout->setAlignment(VERTICAL_ALIGNMENT);
    endEditCP(panel3Layout, BoxLayout::AlignmentFieldMask);

    beginEditCP(panel4Layout, BoxLayout::AlignmentFieldMask);
        panel4Layout->setAlignment(VERTICAL_ALIGNMENT);
    endEditCP(panel4Layout, BoxLayout::AlignmentFieldMask);

    beginEditCP(panel5Layout, BoxLayout::AlignmentFieldMask);
        panel5Layout->setAlignment(VERTICAL_ALIGNMENT);
    endEditCP(panel5Layout, BoxLayout::AlignmentFieldMask);

    beginEditCP(panel6Layout, BoxLayout::AlignmentFieldMask);
        panel6Layout->setAlignment(VERTICAL_ALIGNMENT);
    endEditCP(panel6Layout, BoxLayout::AlignmentFieldMask);

    beginEditCP(MainFrameLayout, FlowLayout::AlignmentFieldMask | FlowLayout::MinorAxisAlignmentFieldMask);
        MainFrameLayout->setAlignment(HORIZONTAL_ALIGNMENT);
        MainFrameLayout->setMinorAxisAlignment(AXIS_CENTER_ALIGNMENT);
    endEditCP(MainFrameLayout, FlowLayout::AlignmentFieldMask | FlowLayout::MinorAxisAlignmentFieldMask);



    /******************************************************

        Create MainFrame and some Panels


    ******************************************************/
    FramePtr MainFrame = osg::Frame::create();
    PanelPtr panel1 = osg::Panel::create();
    PanelPtr panel2 = osg::Panel::create();
    PanelPtr panel3 = osg::Panel::create();
    PanelPtr panel4 = osg::Panel::create();
    PanelPtr panel5 = osg::Panel::create();
    PanelPtr panel6 = osg::Panel::create();

    
    // Edit Panel1, Panel2
    beginEditCP(panel1, Component::PreferredSizeFieldMask | Panel::ChildrenFieldMask | Panel::LayoutFieldMask | Component::BackgroundFieldMask | Component::BorderFieldMask);
        panel1->setPreferredSize(Vec2s(400, 400));
        panel1->getChildren().addValue(button2);
        panel1->getChildren().addValue(panel3);
        panel1->getChildren().addValue(panel4);
        panel1->setLayout(panel1Layout);
        panel1->setBackground(panelBackground);
        panel1->setBorder(panelBorder);
    endEditCP(panel1, Component::PreferredSizeFieldMask | Panel::ChildrenFieldMask | Panel::LayoutFieldMask | Component::BackgroundFieldMask | Component::BorderFieldMask);

    beginEditCP(panel2, Panel::PreferredSizeFieldMask | Panel::ChildrenFieldMask | Panel::LayoutFieldMask | Component::BackgroundFieldMask | Component::BorderFieldMask);
        panel2->setPreferredSize(Vec2s(400, 400));
        panel2->getChildren().addValue(button3);
        panel2->getChildren().addValue(panel5);
        panel2->getChildren().addValue(panel6);
        panel2->setLayout(panel2Layout);
        panel2->setBackground(panelBackground);
        panel2->setBorder(panelBorder);
    endEditCP(panel2, Panel::PreferredSizeFieldMask | Panel::ChildrenFieldMask | Panel::LayoutFieldMask | Component::BackgroundFieldMask | Component::BorderFieldMask);
    
    beginEditCP(panel3, Panel::ChildrenFieldMask | Panel::LayoutFieldMask | Component::PreferredSizeFieldMask | Component::BackgroundFieldMask);
        panel3->getChildren().addValue(button4);
        panel3->getChildren().addValue(button5);
        panel3->setLayout(panel3Layout);
        panel3->setPreferredSize(Vec2s(125, 130));
        panel3->setBackground(panelSmallBackground);
    endEditCP(panel3, Panel::ChildrenFieldMask | Panel::LayoutFieldMask | Component::PreferredSizeFieldMask | Component::BackgroundFieldMask);
    
    beginEditCP(panel4, Panel::ChildrenFieldMask | Panel::LayoutFieldMask | Component::PreferredSizeFieldMask | Component::BackgroundFieldMask);
        panel4->getChildren().addValue(button6);
        panel4->getChildren().addValue(button7);
        panel4->setLayout(panel4Layout);
        panel4->setPreferredSize(Vec2s(125, 130));
        panel4->setBackground(panelSmallBackground);
    endEditCP(panel4, Panel::ChildrenFieldMask | Panel::LayoutFieldMask | Component::PreferredSizeFieldMask | Component::BackgroundFieldMask);
        
    beginEditCP(panel5, Panel::ChildrenFieldMask | Panel::LayoutFieldMask | Component::PreferredSizeFieldMask | Component::BackgroundFieldMask);
        panel5->getChildren().addValue(button8);
        panel5->getChildren().addValue(button9);
        panel5->setLayout(panel5Layout);
        panel5->setPreferredSize(Vec2s(125, 130));
        panel5->setBackground(panelSmallBackground);
    endEditCP(panel5, Panel::ChildrenFieldMask | Panel::LayoutFieldMask | Component::PreferredSizeFieldMask | Component::BackgroundFieldMask);
        
    beginEditCP(panel6, Panel::ChildrenFieldMask | Panel::LayoutFieldMask | Component::PreferredSizeFieldMask | Component::BackgroundFieldMask);
        panel6->getChildren().addValue(button10);
        panel6->getChildren().addValue(button11);
        panel6->setLayout(panel6Layout);
        panel6->setPreferredSize(Vec2s(125, 130));
        panel6->setBackground(panelSmallBackground);
    endEditCP(panel6, Panel::ChildrenFieldMask | Panel::LayoutFieldMask | Component::PreferredSizeFieldMask | Component::BackgroundFieldMask);


    // Edit MainFrame
    beginEditCP(MainFrame, Frame::BorderFieldMask | Frame::ChildrenFieldMask | Frame::LayoutFieldMask | Frame::BackgroundFieldMask);
       MainFrame->setBorder(panelBorder);
       MainFrame->getChildren().addValue(label1);
       MainFrame->getChildren().addValue(button1);
       MainFrame->getChildren().addValue(panel1);
       MainFrame->getChildren().addValue(panel2);
       MainFrame->setLayout(MainFrameLayout);
       MainFrame->setBackground(MainFrameBackground);
    endEditCP(MainFrame, Frame::BorderFieldMask | Frame::ChildrenFieldMask | Frame::LayoutFieldMask | Frame::BackgroundFieldMask);

    // Create the Drawing Surface
    UIDrawingSurfacePtr TutorialDrawingSurface = UIDrawingSurface::create();
    beginEditCP(TutorialDrawingSurface, UIDrawingSurface::GraphicsFieldMask | UIDrawingSurface::RootFrameFieldMask | UIDrawingSurface::EventProducerFieldMask);
        TutorialDrawingSurface->setGraphics(TutorialGraphics);
        TutorialDrawingSurface->setRootFrame(MainFrame);
        TutorialDrawingSurface->setEventProducer(TutorialWindowEventProducer);
    endEditCP(TutorialDrawingSurface, UIDrawingSurface::GraphicsFieldMask | UIDrawingSurface::RootFrameFieldMask | UIDrawingSurface::EventProducerFieldMask);
    // Create the UI Foreground Object
    UIForegroundPtr TutorialUIForeground = osg::UIForeground::create();

    beginEditCP(TutorialUIForeground, UIForeground::DrawingSurfaceFieldMask | UIForeground::FramePositionOffsetFieldMask | UIForeground::FrameBoundsFieldMask);
        TutorialUIForeground->setDrawingSurface(TutorialDrawingSurface);
        TutorialUIForeground->setFramePositionOffset(Vec2s(0,0));
        TutorialUIForeground->setFrameBounds(Vec2f(0.8,0.8));
    endEditCP(TutorialUIForeground, UIForeground::DrawingSurfaceFieldMask | UIForeground::FramePositionOffsetFieldMask | UIForeground::FrameBoundsFieldMask);

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(MainWindow);
    mgr->setRoot(scene);

    // Add the UI Foreground Object to the Scene
    ViewportPtr TutorialViewport = mgr->getWindow()->getPort(0);
    beginEditCP(TutorialViewport, Viewport::ForegroundsFieldMask);
        TutorialViewport->getForegrounds().addValue(TutorialUIForeground);
    beginEditCP(TutorialViewport, Viewport::ForegroundsFieldMask);

    // Show the whole Scene
    mgr->showAll();

    TutorialWindowEventProducer->openWindow(Pnt2s(50,50),
                                        Vec2s(1100,900),
                                        "OpenSG 12ComplexLayout Window");

    //Main Event Loop
    while(!ExitApp)
    {
        TutorialWindowEventProducer->update();
        TutorialWindowEventProducer->draw();
    }
    osgExit();

    return 0;
}
// Callback functions


// Redraw the window
void display(void)
{
    mgr->redraw();
}

// React to size changes
void reshape(Vec2s Size)
{
    mgr->resize(Size.x(), Size.y());
}
