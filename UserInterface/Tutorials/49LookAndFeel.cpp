// OpenSG Tutorial Example: Creating a Button Component
//
// This tutorial explains how to edit the basic features of
// a Button created in the OSG User Interface library.
// 
// Includes: Button PreferredSize, MaximumSize, MinimumSize, Font,
// Text,and adding a Button to a Scene.  Also note that clicking
// the Button causes it to appear pressed


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
#include <OpenSG/UserInterface/OSGInternalWindow.h>
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
void reshape(Vec2f Size);

// 49LookAndFeel Headers
#include <OpenSG/UserInterface/OSGButton.h>
#include <OpenSG/UserInterface/OSGBoxLayout.h>
#include <OpenSG/UserInterface/OSGCardLayout.h>
#include <OpenSG/UserInterface/OSGLookAndFeelManager.h>
#include <OpenSG/UserInterface/OSGUIDefines.h>
#include <OpenSG/UserInterface/OSGPanel.h>
#include <OpenSG/UserInterface/OSGLabel.h>
#include <OpenSG/UserInterface/OSGToggleButton.h>
#include <OpenSG/UserInterface/OSGGridBagLayout.h>
#include <OpenSG/UserInterface/OSGTabPanel.h>
#include <OpenSG/UserInterface/OSGRadioButton.h>
#include <OpenSG/UserInterface/OSGRadioButtonGroup.h>
#include <OpenSG/UserInterface/OSGCheckboxButton.h>
#include <OpenSG/UserInterface/OSGPasswordField.h>
#include <OpenSG/UserInterface/OSGUIBackgrounds.h>
#include <OpenSG/UserInterface/OSGBorders.h>
#include <OpenSG/UserInterface/OSGTextField.h>
#include <OpenSG/UserInterface/OSGTextArea.h>
#include <OpenSG/UserInterface/OSGTextField.h>
#include <OpenSG/UserInterface/OSGSpinner.h>
#include <OpenSG/UserInterface/OSGNumberSpinnerModel.h>
#include <OpenSG/UserInterface/OSGGridBagLayout.h>
#include <OpenSG/UserInterface/OSGGridBagLayoutConstraints.h>
#include <sstream>
#include <OpenSG/UserInterface/OSGGridLayout.h>
#include <OpenSG/UserInterface/OSGComboBox.h>
#include <OpenSG/UserInterface/OSGDefaultMutableComboBoxModel.h>

RadioButtonGroup DeselectedRadioButtonGroup;
RadioButtonGroup SelectedRadioButtonGroup;
RadioButtonGroup DisabledSelectedRadioButtonGroup;
RadioButtonGroup DisabledDeselectedRadioButtonGroup;
Int32SpinnerModelPtr inactiveSpinnerModel(new Int32SpinnerModel());
Int32SpinnerModelPtr activeSpinnerModel(new Int32SpinnerModel());
Int32SpinnerModelPtr disabledInactiveSpinnerModel(new Int32SpinnerModel());
Int32SpinnerModelPtr disabledActiveSpinnerModel(new Int32SpinnerModel());



DefaultMutableComboBoxModelPtr editableComboBoxModel;
DefaultMutableComboBoxModelPtr noneditableComboBoxModel;
DefaultMutableComboBoxModelPtr disabledEditableComboBoxModel;
DefaultMutableComboBoxModelPtr disabledNoneditableComboBoxModel;



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

class StatePanelCreator
{
public:
	StatePanelCreator(void);

	PanelPtr getPanel(void) const;

protected:
	PanelPtr _ThePanel;	

		
	class ButtonPressedListener : public ActionListener
		{
		public:

		virtual void actionPerformed(const ActionEvent& e)
			{
				//beginEditCP(inactiveButton, Button::TextFieldMask);
				//	inactiveButton->Button::setText("Active");
				//endEditCP(inactiveButton, Button::TextFieldMask);
				
			}
		};
			
	ButtonPressedListener _ButtonListener;


	PanelPtr createStatePanel(void);
	
	

private:
};

StatePanelCreator::StatePanelCreator(void)
{
	_ThePanel = createStatePanel();
}

PanelPtr StatePanelCreator::getPanel(void) const
{
	return _ThePanel;
}

//PanelPtr createStatePanel(void);


// Create a class to allow for the use of the Ctrl+q
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEvent& e)
   {
       if(e.getKey() == KeyEvent::KEY_Q && e.getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
       {
           ExitApp = true;
       }
   }

   virtual void keyReleased(const KeyEvent& e)
   {
   }

   virtual void keyTyped(const KeyEvent& e)
   {
   }
};

int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    WindowEventProducerPtr TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();

	beginEditCP(TutorialWindowEventProducer, WindowEventProducer::UseCallbackForDrawFieldMask | WindowEventProducer::UseCallbackForReshapeFieldMask);
		TutorialWindowEventProducer->setUseCallbackForDraw(true);
		TutorialWindowEventProducer->setUseCallbackForReshape(true);
	endEditCP(TutorialWindowEventProducer, WindowEventProducer::UseCallbackForDrawFieldMask | WindowEventProducer::UseCallbackForReshapeFieldMask);
    
    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

    //Add Window Listener
    TutorialWindowListener TheTutorialWindowListener;
    TutorialWindowEventProducer->addWindowListener(&TheTutorialWindowListener);
    TutorialKeyListener TheKeyListener;
    TutorialWindowEventProducer->addKeyListener(&TheKeyListener);


    // Make Torus Node
    NodePtr TorusGeometryNode = makeTorus(.5, 2, 16, 16);

    // Make Main Scene Node and add the Torus
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
        scene->setCore(osg::Group::create());
        scene->addChild(TorusGeometryNode);
    endEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    // Create the Graphics
    GraphicsPtr graphics = osg::Graphics2D::create();

    // Initialize the LookAndFeelManager to enable default settings
    LookAndFeelManager::the()->getLookAndFeel()->init();



    /******************************************************

            Create Button Components to be used with 
            TabPanel and specify their characteristics

    ******************************************************/
    ButtonPtr StateTabPanelTab = osg::Button::create();


    beginEditCP(StateTabPanelTab, Button::TextFieldMask);
        StateTabPanelTab->setText("State");
    endEditCP(StateTabPanelTab, Button::TextFieldMask);
   
    /******************************************************

            Create TabPanel.  
    ******************************************************/
	StatePanelCreator TheStatePanelCreator;
	PanelPtr StatePanel = TheStatePanelCreator.getPanel();
    TabPanelPtr MainTabPanel = osg::TabPanel::create();
    beginEditCP(MainTabPanel, TabPanel::PreferredSizeFieldMask | TabPanel::TabsFieldMask | TabPanel::TabContentsFieldMask | TabPanel::ActiveTabFieldMask | TabPanel::TabAlignmentFieldMask | TabPanel::TabPlacementFieldMask  | TabPanel::ConstraintsFieldMask);
        MainTabPanel->setPreferredSize(Vec2f(600,600));
        MainTabPanel->addTab(StateTabPanelTab, StatePanel);
        MainTabPanel->setActiveTab(0);
        MainTabPanel->setTabAlignment(0.5f);
        MainTabPanel->setTabPlacement(TabPanel::PLACEMENT_NORTH);
    endEditCP(MainTabPanel, TabPanel::PreferredSizeFieldMask | TabPanel::TabsFieldMask | TabPanel::TabContentsFieldMask | TabPanel::ActiveTabFieldMask | TabPanel::TabAlignmentFieldMask | TabPanel::TabPlacementFieldMask  | TabPanel::ConstraintsFieldMask);


    // Create The Main InternalWindow
    // Create Background to be used with the Main InternalWindow
    ColorUIBackgroundPtr MainInternalWindowBackground = osg::ColorUIBackground::create();
    beginEditCP(MainInternalWindowBackground, ColorUIBackground::ColorFieldMask);
        MainInternalWindowBackground->setColor(Color4f(1.0,1.0,1.0,0.5));
    endEditCP(MainInternalWindowBackground, ColorUIBackground::ColorFieldMask);
    
	CardLayoutPtr MainInternalWindowLayout = osg::CardLayout::create();

    InternalWindowPtr MainInternalWindow = osg::InternalWindow::create();
	beginEditCP(MainInternalWindow, InternalWindow::ChildrenFieldMask | InternalWindow::LayoutFieldMask | InternalWindow::BackgroundsFieldMask | InternalWindow::AlignmentInDrawingSurfaceFieldMask | InternalWindow::ScalingInDrawingSurfaceFieldMask | InternalWindow::DrawTitlebarFieldMask | InternalWindow::ResizableFieldMask);
       MainInternalWindow->getChildren().push_back(MainTabPanel);
       MainInternalWindow->setLayout(MainInternalWindowLayout);
       MainInternalWindow->setBackgrounds(MainInternalWindowBackground);
	   MainInternalWindow->setAlignmentInDrawingSurface(Vec2f(0.5f,0.5f));
	   MainInternalWindow->setScalingInDrawingSurface(Vec2f(0.65f,0.65f));
	   MainInternalWindow->setDrawTitlebar(false);
	   MainInternalWindow->setResizable(false);
    endEditCP(MainInternalWindow, InternalWindow::ChildrenFieldMask | InternalWindow::LayoutFieldMask | InternalWindow::BackgroundsFieldMask | InternalWindow::AlignmentInDrawingSurfaceFieldMask | InternalWindow::ScalingInDrawingSurfaceFieldMask | InternalWindow::DrawTitlebarFieldMask | InternalWindow::ResizableFieldMask);

    // Create the Drawing Surface
    UIDrawingSurfacePtr TutorialDrawingSurface = UIDrawingSurface::create();
    beginEditCP(TutorialDrawingSurface, UIDrawingSurface::GraphicsFieldMask | UIDrawingSurface::EventProducerFieldMask  | Component::ConstraintsFieldMask);
        TutorialDrawingSurface->setGraphics(graphics);
        TutorialDrawingSurface->setEventProducer(TutorialWindowEventProducer);
    endEditCP(TutorialDrawingSurface, UIDrawingSurface::GraphicsFieldMask | UIDrawingSurface::EventProducerFieldMask  | Component::ConstraintsFieldMask);
    
	TutorialDrawingSurface->openWindow(MainInternalWindow);

    // Create the UI Foreground Object
    UIForegroundPtr TutorialUIForeground = osg::UIForeground::create();

    beginEditCP(TutorialUIForeground, UIForeground::DrawingSurfaceFieldMask  | Component::ConstraintsFieldMask);
        TutorialUIForeground->setDrawingSurface(TutorialDrawingSurface);
    endEditCP(TutorialUIForeground, UIForeground::DrawingSurfaceFieldMask  | Component::ConstraintsFieldMask);
    
    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(MainWindow);
    mgr->setRoot(scene);

    // Add the UI Foreground Object to the Scene
    ViewportPtr TutorialViewport = mgr->getWindow()->getPort(0);
    beginEditCP(TutorialViewport, Viewport::ForegroundsFieldMask);
        TutorialViewport->getForegrounds().push_back(TutorialUIForeground);
    beginEditCP(TutorialViewport, Viewport::ForegroundsFieldMask);

    // Show the whole Scene
    mgr->showAll();

    TutorialWindowEventProducer->openWindow(Pnt2f(50,50),
                                        Vec2f(900,900),
                                        "OpenSG 49LookAndFeel Window");

    //Main Event Loop
    while(!ExitApp)
    {
        TutorialWindowEventProducer->update();
        TutorialWindowEventProducer->draw();
    }
    osgExit();

    return 0;
}


PanelPtr StatePanelCreator::createStatePanel(void)
{
    /******************************************************

            Create a Panel and its Layout

    ******************************************************/

    GridBagLayoutPtr statePanelLayout = osg::GridBagLayout::create();
    beginEditCP(statePanelLayout, GridBagLayout::RowsFieldMask | GridBagLayout::ColumnsFieldMask  | Component::ConstraintsFieldMask);
        statePanelLayout->setRows(10);
        statePanelLayout->setColumns(5);
    endEditCP(statePanelLayout, GridBagLayout::RowsFieldMask | GridBagLayout::ColumnsFieldMask  | Component::ConstraintsFieldMask);
    
    PanelPtr statePanel = osg::Panel::create();

    /******************************************************
            LayoutConstraints
                Note: 0506 represents a Constraint 
                    at X = 5, Y = 6
            
    ******************************************************/
    
    GridBagLayoutConstraintsPtr Constraint0000 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0100 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0200 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0300 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0400 = osg::GridBagLayoutConstraints::create();

    beginEditCP(Constraint0000, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0000->setGridX(0);
        Constraint0000->setGridY(0);
    endEditCP(Constraint0000, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0100, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0100->setGridX(1);
        Constraint0100->setGridY(0);
    endEditCP(Constraint0100, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0200, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0200->setGridX(2);
        Constraint0200->setGridY(0);
    endEditCP(Constraint0200, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0300, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0300->setGridX(3);
        Constraint0300->setGridY(0);
    endEditCP(Constraint0300, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0400, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0400->setGridX(4);
        Constraint0400->setGridY(0);
    endEditCP(Constraint0400, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    /******************************************************
                            Row1
    ******************************************************/
    GridBagLayoutConstraintsPtr Constraint0001 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0101 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0201 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0301 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0401 = osg::GridBagLayoutConstraints::create();

    beginEditCP(Constraint0001, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0001->setGridX(0);
        Constraint0001->setGridY(1);
    endEditCP(Constraint0001, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0101, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0101->setGridX(1);
        Constraint0101->setGridY(1);
    endEditCP(Constraint0101, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0201, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0201->setGridX(2);
        Constraint0201->setGridY(1);
    endEditCP(Constraint0201, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0301, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0301->setGridX(3);
        Constraint0301->setGridY(1);
    endEditCP(Constraint0301, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0401, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0401->setGridX(4);
        Constraint0401->setGridY(1);
    endEditCP(Constraint0401, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    /******************************************************
                            Row2
    ******************************************************/
    GridBagLayoutConstraintsPtr Constraint0002 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0102 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0202 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0302 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0402 = osg::GridBagLayoutConstraints::create();
    
    beginEditCP(Constraint0002, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0002->setGridX(0);
        Constraint0002->setGridY(2);
    endEditCP(Constraint0002, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0102, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0102->setGridX(1);
        Constraint0102->setGridY(2);
    endEditCP(Constraint0102, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0202, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0202->setGridX(2);
        Constraint0202->setGridY(2);
    endEditCP(Constraint0202, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0302, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0302->setGridX(3);
        Constraint0302->setGridY(2);
    endEditCP(Constraint0302, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0402, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0402->setGridX(4);
        Constraint0402->setGridY(2);
    endEditCP(Constraint0402, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    /******************************************************
                            Row3
    ******************************************************/
    GridBagLayoutConstraintsPtr Constraint0003 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0103 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0203 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0303 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0403 = osg::GridBagLayoutConstraints::create();
    
    beginEditCP(Constraint0003, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0003->setGridX(0);
        Constraint0003->setGridY(3);
    endEditCP(Constraint0003, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0103, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0103->setGridX(1);
        Constraint0103->setGridY(3);
    endEditCP(Constraint0103, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0203, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0203->setGridX(2);
        Constraint0203->setGridY(3);
    endEditCP(Constraint0203, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0303, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0303->setGridX(3);
        Constraint0303->setGridY(3);
    endEditCP(Constraint0303, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0403, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0403->setGridX(4);
        Constraint0403->setGridY(3);
    endEditCP(Constraint0403, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    /******************************************************
                            Row4
    ******************************************************/
    GridBagLayoutConstraintsPtr Constraint0004 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0104 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0204 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0304 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0404 = osg::GridBagLayoutConstraints::create();
        
    beginEditCP(Constraint0004, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0004->setGridX(0);
        Constraint0004->setGridY(4);
    endEditCP(Constraint0004, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0104, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0104->setGridX(1);
        Constraint0104->setGridY(4);
    endEditCP(Constraint0104, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0204, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0204->setGridX(2);
        Constraint0204->setGridY(4);
    endEditCP(Constraint0204, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0304, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0304->setGridX(3);
        Constraint0304->setGridY(4);
    endEditCP(Constraint0304, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0404, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0404->setGridX(4);
        Constraint0404->setGridY(4);
    endEditCP(Constraint0404, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    /******************************************************
                            Row5
    ******************************************************/
    GridBagLayoutConstraintsPtr Constraint0005 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0105 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0205 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0305 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0405 = osg::GridBagLayoutConstraints::create();
            
    beginEditCP(Constraint0005, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0005->setGridX(0);
        Constraint0005->setGridY(5);
    endEditCP(Constraint0005, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0105, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0105->setGridX(1);
        Constraint0105->setGridY(5);
    endEditCP(Constraint0105, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0205, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0205->setGridX(2);
        Constraint0205->setGridY(5);
    endEditCP(Constraint0205, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0305, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0305->setGridX(3);
        Constraint0305->setGridY(5);
    endEditCP(Constraint0305, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0405, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0405->setGridX(4);
        Constraint0405->setGridY(5);
    endEditCP(Constraint0405, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    /******************************************************
                            Row6
    ******************************************************/    
    GridBagLayoutConstraintsPtr Constraint0006 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0106 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0206 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0306 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0406 = osg::GridBagLayoutConstraints::create();
            
    beginEditCP(Constraint0006, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0006->setGridX(0);
        Constraint0006->setGridY(6);
    endEditCP(Constraint0006, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0106, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0106->setGridX(1);
        Constraint0106->setGridY(6);
    endEditCP(Constraint0106, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0206, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0206->setGridX(2);
        Constraint0206->setGridY(6);
    endEditCP(Constraint0206, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0306, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0306->setGridX(3);
        Constraint0306->setGridY(6);
    endEditCP(Constraint0306, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0406, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0406->setGridX(4);
        Constraint0406->setGridY(6);
    endEditCP(Constraint0406, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    /******************************************************
                            Row7
    ******************************************************/    
    GridBagLayoutConstraintsPtr Constraint0007 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0107 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0207 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0307 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0407 = osg::GridBagLayoutConstraints::create();
            
    beginEditCP(Constraint0007, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0007->setGridX(0);
        Constraint0007->setGridY(7);
    endEditCP(Constraint0007, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0107, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0107->setGridX(1);
        Constraint0107->setGridY(7);
    endEditCP(Constraint0107, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0207, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0207->setGridX(2);
        Constraint0207->setGridY(7);
    endEditCP(Constraint0207, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0307, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0307->setGridX(3);
        Constraint0307->setGridY(7);
    endEditCP(Constraint0307, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0407, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0407->setGridX(4);
        Constraint0407->setGridY(7);
    endEditCP(Constraint0407, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    /******************************************************
                            Row8
    ******************************************************/    
    GridBagLayoutConstraintsPtr Constraint0008 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0108 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0208 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0308 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0408 = osg::GridBagLayoutConstraints::create();
            
    beginEditCP(Constraint0008, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0008->setGridX(0);
        Constraint0008->setGridY(8);
    endEditCP(Constraint0008, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0108, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0108->setGridX(1);
        Constraint0108->setGridY(8);
    endEditCP(Constraint0108, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0208, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0208->setGridX(2);
        Constraint0208->setGridY(8);
    endEditCP(Constraint0208, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0308, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0308->setGridX(3);
        Constraint0308->setGridY(8);
    endEditCP(Constraint0308, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0408, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0408->setGridX(4);
        Constraint0408->setGridY(8);
    endEditCP(Constraint0408, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    /******************************************************
                            Row9
    ******************************************************/    
    GridBagLayoutConstraintsPtr Constraint0009 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0109 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0209 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0309 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0409 = osg::GridBagLayoutConstraints::create();
            
    beginEditCP(Constraint0009, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0009->setGridX(0);
        Constraint0009->setGridY(9);
    endEditCP(Constraint0009, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0109, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0109->setGridX(1);
        Constraint0109->setGridY(9);
    endEditCP(Constraint0109, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0209, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0209->setGridX(2);
        Constraint0209->setGridY(9);
    endEditCP(Constraint0209, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0309, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0309->setGridX(3);
        Constraint0309->setGridY(9);
    endEditCP(Constraint0309, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0409, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0409->setGridX(4);
        Constraint0409->setGridY(9);
    endEditCP(Constraint0409, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    /******************************************************
                            Row10
    ******************************************************/    
    GridBagLayoutConstraintsPtr Constraint0010 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0110 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0210 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0310 = osg::GridBagLayoutConstraints::create();
    GridBagLayoutConstraintsPtr Constraint0410 = osg::GridBagLayoutConstraints::create();
            
    beginEditCP(Constraint0010, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0010->setGridX(0);
        Constraint0010->setGridY(10);
    endEditCP(Constraint0010, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0110, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0110->setGridX(1);
        Constraint0110->setGridY(10);
    endEditCP(Constraint0110, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
    
    beginEditCP(Constraint0210, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0210->setGridX(2);
        Constraint0210->setGridY(10);
    endEditCP(Constraint0210, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0310, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0310->setGridX(3);
        Constraint0310->setGridY(10);
    endEditCP(Constraint0310, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    beginEditCP(Constraint0410, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);
        Constraint0410->setGridX(4);
        Constraint0410->setGridY(10);
    endEditCP(Constraint0410, GridBagLayoutConstraints::GridXFieldMask | GridBagLayoutConstraints::GridYFieldMask);

    /******************************************************

            Create Components to add to Panel

                        Buttons
    ******************************************************/
    ButtonPtr inactiveButton = osg::Button::create();
    ButtonPtr activeButton = osg::Button::create();
    ButtonPtr disabledInactiveButton = osg::Button::create();
    ButtonPtr disabledActiveButton = osg::Button::create();

	beginEditCP(inactiveButton, Button::ActiveFieldMask | Button::TextFieldMask | Button::ConstraintsFieldMask  | Button::ConstraintsFieldMask | Button::MaxSizeFieldMask);
        inactiveButton->setActive(false);
        inactiveButton->setText("Inactive");
        inactiveButton->setConstraints(Constraint0101);
        inactiveButton->setMaxSize(Vec2f(75, 23));
    endEditCP(inactiveButton, Button::ActiveFieldMask | Button::TextFieldMask | Button::ConstraintsFieldMask  | Button::ConstraintsFieldMask | Button::MaxSizeFieldMask);
    
    beginEditCP(activeButton, Button::TextFieldMask  | Button::ConstraintsFieldMask | Button::MaxSizeFieldMask);
        activeButton->setText("RolledOver");
		activeButton->setBorder(activeButton->getRolloverBorder());
        activeButton->setConstraints(Constraint0201);
        activeButton->setMaxSize(Vec2f(75, 23));
    endEditCP(activeButton, Button::TextFieldMask  | Button::ConstraintsFieldMask | Button::MaxSizeFieldMask);

    beginEditCP(disabledInactiveButton, Button::ActiveFieldMask | Button::EnabledFieldMask | Button::TextFieldMask | Button::ConstraintsFieldMask  | Button::ConstraintsFieldMask | Button::MaxSizeFieldMask);
        disabledInactiveButton->setActive(false);
        disabledInactiveButton->setEnabled(false);
        disabledInactiveButton->setText("Disabled/Inactive");
        disabledInactiveButton->setConstraints(Constraint0301);
        disabledInactiveButton->setMaxSize(Vec2f(90, 23));
    endEditCP(disabledInactiveButton, Button::ActiveFieldMask | Button::EnabledFieldMask | Button::TextFieldMask | Button::ConstraintsFieldMask  | Button::ConstraintsFieldMask | Button::MaxSizeFieldMask);
    
    beginEditCP(disabledActiveButton, Button::EnabledFieldMask | Button::TextFieldMask | Button::ConstraintsFieldMask | Button::MaxSizeFieldMask);
        disabledActiveButton->setEnabled(false);
        disabledActiveButton->setText("Disabled");
        disabledActiveButton->setConstraints(Constraint0401);
        disabledActiveButton->setMaxSize(Vec2f(90, 23));
    endEditCP(disabledActiveButton, Button::EnabledFieldMask | Button::TextFieldMask | Button::ConstraintsFieldMask | Button::MaxSizeFieldMask);
    
    /******************************************************
                        ToggleButtons
    ******************************************************/
    ToggleButtonPtr nonSelectedToggleButton = osg::ToggleButton::create();
    ToggleButtonPtr selectedToggleButton = osg::ToggleButton::create();
    ToggleButtonPtr disabledSelectedToggleButton = osg::ToggleButton::create();
    ToggleButtonPtr disabledNonselectedToggleButton = osg::ToggleButton::create();
    
    beginEditCP(nonSelectedToggleButton, ToggleButton::TextFieldMask | ToggleButton::ConstraintsFieldMask | ToggleButton::MaxSizeFieldMask);
        nonSelectedToggleButton->setText("NonSelected");
        nonSelectedToggleButton->setConstraints(Constraint0102);
        nonSelectedToggleButton->setMaxSize(Vec2f(75, 23));
    endEditCP(nonSelectedToggleButton, ToggleButton::TextFieldMask | ToggleButton::ConstraintsFieldMask | ToggleButton::MaxSizeFieldMask);

    beginEditCP(selectedToggleButton, ToggleButton::SelectedFieldMask | ToggleButton::TextFieldMask | ToggleButton::ConstraintsFieldMask | ToggleButton::MaxSizeFieldMask);
        selectedToggleButton->setSelected(true);
        selectedToggleButton->setText("Selected");
        selectedToggleButton->setConstraints(Constraint0202);
        selectedToggleButton->setMaxSize(Vec2f(75, 23));
    endEditCP(selectedToggleButton, ToggleButton::SelectedFieldMask | ToggleButton::TextFieldMask | ToggleButton::ConstraintsFieldMask | ToggleButton::MaxSizeFieldMask);
    
    beginEditCP(disabledSelectedToggleButton, ToggleButton::SelectedFieldMask | ToggleButton::EnabledFieldMask | ToggleButton::TextFieldMask | ToggleButton::ConstraintsFieldMask | ToggleButton::MaxSizeFieldMask);
        disabledSelectedToggleButton->setSelected(true);
        disabledSelectedToggleButton->setEnabled(false);
        disabledSelectedToggleButton->setText("Disabled/Selected");
        disabledSelectedToggleButton->setConstraints(Constraint0302);
        disabledSelectedToggleButton->setMaxSize(Vec2f(90, 23));
    endEditCP(disabledSelectedToggleButton, ToggleButton::SelectedFieldMask | ToggleButton::EnabledFieldMask | ToggleButton::TextFieldMask | ToggleButton::ConstraintsFieldMask | ToggleButton::MaxSizeFieldMask);
    
    beginEditCP(disabledNonselectedToggleButton, ToggleButton::SelectedFieldMask | ToggleButton::EnabledFieldMask | ToggleButton::TextFieldMask | ToggleButton::ConstraintsFieldMask | ToggleButton::MaxSizeFieldMask);
        disabledNonselectedToggleButton->setSelected(false);
        disabledNonselectedToggleButton->setEnabled(false);
        disabledNonselectedToggleButton->setText("Disabled");
        disabledNonselectedToggleButton->setConstraints(Constraint0402);
        disabledNonselectedToggleButton->setMaxSize(Vec2f(90, 23));
    endEditCP(disabledNonselectedToggleButton, ToggleButton::SelectedFieldMask | ToggleButton::EnabledFieldMask | ToggleButton::TextFieldMask | ToggleButton::ConstraintsFieldMask | ToggleButton::MaxSizeFieldMask);

    /******************************************************
                        RadioButtons
    ******************************************************/
    RadioButtonPtr deselectedRadioButton = osg::RadioButton::create();
    RadioButtonPtr selectedRadioButton = osg::RadioButton::create();
    RadioButtonPtr disabledDeselectedRadioButton = osg::RadioButton::create();
    RadioButtonPtr disabledSelectedRadioButton = osg::RadioButton::create();
    DeselectedRadioButtonGroup.addButton(deselectedRadioButton);

    SelectedRadioButtonGroup.addButton(selectedRadioButton);
    
    DisabledDeselectedRadioButtonGroup.addButton(disabledDeselectedRadioButton);
    
    DisabledSelectedRadioButtonGroup.addButton(disabledSelectedRadioButton);

    beginEditCP(deselectedRadioButton, RadioButton::TextFieldMask | RadioButton::ConstraintsFieldMask | RadioButton::MaxSizeFieldMask);
        deselectedRadioButton->setText("Deselected");
        deselectedRadioButton->setConstraints(Constraint0103);
        deselectedRadioButton->setMaxSize(Vec2f(75, 23));
    endEditCP(deselectedRadioButton, RadioButton::TextFieldMask | RadioButton::ConstraintsFieldMask | RadioButton::MaxSizeFieldMask);

    beginEditCP(selectedRadioButton, RadioButton::SelectedFieldMask | RadioButton::TextFieldMask | RadioButton::ConstraintsFieldMask | RadioButton::MaxSizeFieldMask);
        selectedRadioButton->setSelected(true);
        selectedRadioButton->setText("Selected");
        selectedRadioButton->setConstraints(Constraint0203);
        selectedRadioButton->setMaxSize(Vec2f(75, 23));
    endEditCP(selectedRadioButton, RadioButton::SelectedFieldMask | RadioButton::TextFieldMask | RadioButton::ConstraintsFieldMask | RadioButton::MaxSizeFieldMask);

    beginEditCP(disabledDeselectedRadioButton, RadioButton::EnabledFieldMask | RadioButton::SelectedFieldMask | RadioButton::TextFieldMask | RadioButton::ConstraintsFieldMask | RadioButton::MaxSizeFieldMask);
        disabledDeselectedRadioButton->setEnabled(false);
        disabledDeselectedRadioButton->setSelected(false);
        disabledDeselectedRadioButton->setText("Disabled");
        disabledDeselectedRadioButton->setConstraints(Constraint0303);
        disabledDeselectedRadioButton->setMaxSize(Vec2f(75, 23));
    endEditCP(disabledDeselectedRadioButton, RadioButton::EnabledFieldMask | RadioButton::SelectedFieldMask | RadioButton::TextFieldMask | RadioButton::ConstraintsFieldMask | RadioButton::MaxSizeFieldMask);
    
    beginEditCP(disabledSelectedRadioButton, RadioButton::EnabledFieldMask | RadioButton::SelectedFieldMask | RadioButton::TextFieldMask | RadioButton::ConstraintsFieldMask | RadioButton::MaxSizeFieldMask);
        disabledSelectedRadioButton->setEnabled(false);
        disabledSelectedRadioButton->setSelected(true);
        disabledSelectedRadioButton->setText("Disabled/Selected");
        disabledSelectedRadioButton->setConstraints(Constraint0403);
        disabledSelectedRadioButton->setMaxSize(Vec2f(110, 23));
    endEditCP(disabledSelectedRadioButton, RadioButton::EnabledFieldMask | RadioButton::SelectedFieldMask | RadioButton::TextFieldMask | RadioButton::ConstraintsFieldMask | RadioButton::MaxSizeFieldMask);
    
    
    /******************************************************
                        CheckboxButtons
    ******************************************************/
    CheckboxButtonPtr deselectedCheckboxButton = osg::CheckboxButton::create();
    CheckboxButtonPtr selectedCheckboxButton = osg::CheckboxButton::create();
    CheckboxButtonPtr disabledDeselectedCheckboxButton = osg::CheckboxButton::create();
    CheckboxButtonPtr disabledSelectedCheckboxButton = osg::CheckboxButton::create();

    beginEditCP(deselectedCheckboxButton, CheckboxButton::TextFieldMask | CheckboxButton::ConstraintsFieldMask | CheckboxButton::MaxSizeFieldMask);
        deselectedCheckboxButton->setText("Deselected");
        deselectedCheckboxButton->setConstraints(Constraint0104);
        deselectedCheckboxButton->setMaxSize(Vec2f(75, 23));
    endEditCP(deselectedCheckboxButton, CheckboxButton::TextFieldMask | CheckboxButton::ConstraintsFieldMask | CheckboxButton::MaxSizeFieldMask);

    beginEditCP(selectedCheckboxButton, CheckboxButton::SelectedFieldMask | CheckboxButton::TextFieldMask | CheckboxButton::ConstraintsFieldMask | CheckboxButton::MaxSizeFieldMask);
        selectedCheckboxButton->setSelected(true);
        selectedCheckboxButton->setText("Selected");
        selectedCheckboxButton->setConstraints(Constraint0204);
        selectedCheckboxButton->setMaxSize(Vec2f(75, 23));
    endEditCP(selectedCheckboxButton, CheckboxButton::SelectedFieldMask | CheckboxButton::TextFieldMask | CheckboxButton::ConstraintsFieldMask | CheckboxButton::MaxSizeFieldMask);

    beginEditCP(disabledDeselectedCheckboxButton, CheckboxButton::SelectedFieldMask | CheckboxButton::EnabledFieldMask | CheckboxButton::TextFieldMask | CheckboxButton::ConstraintsFieldMask | CheckboxButton::MaxSizeFieldMask);
        disabledDeselectedCheckboxButton->setSelected(false);
        disabledDeselectedCheckboxButton->setEnabled(false);
        disabledDeselectedCheckboxButton->setText("Disabled");
        disabledDeselectedCheckboxButton->setConstraints(Constraint0304);
        disabledDeselectedCheckboxButton->setMaxSize(Vec2f(75, 23));
    endEditCP(disabledDeselectedCheckboxButton, CheckboxButton::SelectedFieldMask | CheckboxButton::EnabledFieldMask | CheckboxButton::TextFieldMask | CheckboxButton::ConstraintsFieldMask | CheckboxButton::MaxSizeFieldMask);

    beginEditCP(disabledSelectedCheckboxButton, CheckboxButton::SelectedFieldMask | CheckboxButton::EnabledFieldMask | CheckboxButton::TextFieldMask | CheckboxButton::ConstraintsFieldMask | CheckboxButton::MaxSizeFieldMask);
        disabledSelectedCheckboxButton->setSelected(true);
        disabledSelectedCheckboxButton->setEnabled(false);
        disabledSelectedCheckboxButton->setText("Disabled/Selected");
        disabledSelectedCheckboxButton->setConstraints(Constraint0404);
        disabledSelectedCheckboxButton->setMaxSize(Vec2f(110, 23));
    endEditCP(disabledSelectedCheckboxButton, CheckboxButton::SelectedFieldMask | CheckboxButton::EnabledFieldMask | CheckboxButton::TextFieldMask | CheckboxButton::ConstraintsFieldMask | CheckboxButton::MaxSizeFieldMask);
    /******************************************************
                        TextFields
    ******************************************************/
    TextFieldPtr editableTextField = osg::TextField::create();
    TextFieldPtr noneditableTextField = osg::TextField::create();
    TextFieldPtr disabledEditableTextField = osg::TextField::create();
    TextFieldPtr disabledNoneditableTextField = osg::TextField::create();

    beginEditCP(editableTextField, TextField::TextFieldMask | TextField::ConstraintsFieldMask | TextField::MaxSizeFieldMask);
        editableTextField->setText("Editable");
        editableTextField->setConstraints(Constraint0105);
        editableTextField->setMaxSize(Vec2f(75, 23));
    endEditCP(editableTextField, TextField::TextFieldMask | TextField::ConstraintsFieldMask | TextField::MaxSizeFieldMask);

    beginEditCP(noneditableTextField, TextField::EditableFieldMask | TextField::TextFieldMask | TextField::ConstraintsFieldMask | TextField::MaxSizeFieldMask);
        noneditableTextField->setEditable(false);
        noneditableTextField->setText("Noneditable");
        noneditableTextField->setConstraints(Constraint0205);
        noneditableTextField->setMaxSize(Vec2f(75, 23));
    endEditCP(noneditableTextField, TextField::EditableFieldMask | TextField::TextFieldMask | TextField::ConstraintsFieldMask | TextField::MaxSizeFieldMask);
    
    beginEditCP(disabledEditableTextField, TextField::EnabledFieldMask | TextField::TextFieldMask | TextField::ConstraintsFieldMask | TextField::MaxSizeFieldMask);
        disabledEditableTextField->setEnabled(false);
        disabledEditableTextField->setText("Disabled");
        disabledEditableTextField->setConstraints(Constraint0305);
        disabledEditableTextField->setMaxSize(Vec2f(75, 23));
    endEditCP(disabledEditableTextField, TextField::EnabledFieldMask | TextField::TextFieldMask | TextField::ConstraintsFieldMask | TextField::MaxSizeFieldMask);
    
    beginEditCP(disabledNoneditableTextField, TextField::EditableFieldMask | TextField::EnabledFieldMask | TextField::TextFieldMask | TextField::ConstraintsFieldMask | TextField::MaxSizeFieldMask);
        disabledNoneditableTextField->setEditable(false);
        disabledNoneditableTextField->setEnabled(false);
        disabledNoneditableTextField->setText("Disabled/Noneditable");
        disabledNoneditableTextField->setConstraints(Constraint0405);
        disabledNoneditableTextField->setMaxSize(Vec2f(90, 23));
    endEditCP(disabledNoneditableTextField, TextField::EditableFieldMask | TextField::EnabledFieldMask | TextField::TextFieldMask | TextField::ConstraintsFieldMask | TextField::MaxSizeFieldMask);
    /******************************************************
                        TextAreas
    ******************************************************/    
    TextAreaPtr editableTextArea = osg::TextArea::create();
    TextAreaPtr noneditableTextArea = osg::TextArea::create();
    TextAreaPtr disabledEditableTextArea = osg::TextArea::create();
    TextAreaPtr disabledNoneditableTextArea = osg::TextArea::create();

    beginEditCP(editableTextArea, TextArea::TextFieldMask | TextArea::ConstraintsFieldMask);
        editableTextArea->setText("Editable");
        editableTextArea->setConstraints(Constraint0106);
		editableTextArea->setMaxSize(Vec2f(100,50));
    endEditCP(editableTextArea, TextArea::TextFieldMask | TextArea::ConstraintsFieldMask);

    beginEditCP(noneditableTextArea, TextArea::EditableFieldMask | TextArea::TextFieldMask | TextArea::ConstraintsFieldMask | TextArea::MaxSizeFieldMask);
        noneditableTextArea->setEditable(false);
        noneditableTextArea->setText("Uneditable");
        noneditableTextArea->setConstraints(Constraint0206);
		noneditableTextArea->setMaxSize(Vec2f(100,50));
    endEditCP(noneditableTextArea, TextArea::EditableFieldMask | TextArea::TextFieldMask | TextArea::ConstraintsFieldMask | TextArea::MaxSizeFieldMask);
    
    beginEditCP(disabledEditableTextArea, TextArea::EnabledFieldMask | TextArea::TextFieldMask | TextArea::ConstraintsFieldMask | TextArea::MaxSizeFieldMask);
        disabledEditableTextArea->setEnabled(false);
        disabledEditableTextArea->setText("Disabled");
        disabledEditableTextArea->setConstraints(Constraint0306);
		disabledEditableTextArea->setMaxSize(Vec2f(100,50));
    endEditCP(disabledEditableTextArea, TextArea::EnabledFieldMask | TextArea::TextFieldMask | TextArea::ConstraintsFieldMask | TextArea::MaxSizeFieldMask);
    
    beginEditCP(disabledNoneditableTextArea, TextArea::EditableFieldMask | TextArea::EnabledFieldMask | TextArea::TextFieldMask | TextArea::ConstraintsFieldMask | TextArea::MaxSizeFieldMask);
        disabledNoneditableTextArea->setEditable(false);
        disabledNoneditableTextArea->setEnabled(false);
        disabledNoneditableTextArea->setText("Disabled");
        disabledNoneditableTextArea->setConstraints(Constraint0406);
		disabledNoneditableTextArea->setMaxSize(Vec2f(100,50));
    endEditCP(disabledNoneditableTextArea, TextArea::EditableFieldMask | TextArea::EnabledFieldMask | TextArea::TextFieldMask | TextArea::ConstraintsFieldMask | TextArea::MaxSizeFieldMask);

    /******************************************************
                        PasswordFields
    ******************************************************/    
    PasswordFieldPtr editablePasswordField = osg::PasswordField::create();
    PasswordFieldPtr nonEditablePasswordField = osg::PasswordField::create();
    PasswordFieldPtr disabledInactivePasswordField = osg::PasswordField::create();
    PasswordFieldPtr disabledActivePasswordField = osg::PasswordField::create(); 
    
    beginEditCP(editablePasswordField, PasswordField::TextFieldMask | PasswordField::ConstraintsFieldMask | PasswordField::MaxSizeFieldMask);
        editablePasswordField->setText("editable");
        editablePasswordField->setConstraints(Constraint0107);
		editablePasswordField->setMaxSize(Vec2f(75,23));
    endEditCP(editablePasswordField, PasswordField::TextFieldMask | PasswordField::ConstraintsFieldMask | PasswordField::MaxSizeFieldMask);

    beginEditCP(nonEditablePasswordField, PasswordField::EditableFieldMask | PasswordField::TextFieldMask | PasswordField::ConstraintsFieldMask | PasswordField::MaxSizeFieldMask);
        nonEditablePasswordField->setEditable(false);
        nonEditablePasswordField->setText("editable");
        nonEditablePasswordField->setConstraints(Constraint0207);
		nonEditablePasswordField->setMaxSize(Vec2f(75,23));
    endEditCP(nonEditablePasswordField, PasswordField::EditableFieldMask | PasswordField::TextFieldMask | PasswordField::ConstraintsFieldMask | PasswordField::MaxSizeFieldMask);
    
    beginEditCP(disabledInactivePasswordField, PasswordField::EnabledFieldMask | PasswordField::TextFieldMask | PasswordField::ConstraintsFieldMask | PasswordField::MaxSizeFieldMask);
        disabledInactivePasswordField->setEnabled(false);
        disabledInactivePasswordField->setText("editable");
        disabledInactivePasswordField->setConstraints(Constraint0307);
		disabledInactivePasswordField->setMaxSize(Vec2f(75,23));
    endEditCP(disabledInactivePasswordField, PasswordField::EnabledFieldMask | PasswordField::TextFieldMask | PasswordField::ConstraintsFieldMask | PasswordField::MaxSizeFieldMask);
    
    beginEditCP(disabledActivePasswordField, PasswordField::EditableFieldMask | PasswordField::EnabledFieldMask | PasswordField::TextFieldMask | PasswordField::ConstraintsFieldMask | PasswordField::MaxSizeFieldMask);
        disabledActivePasswordField->setEditable(false);
        disabledActivePasswordField->setEnabled(false);
        disabledActivePasswordField->setText("editable");
        disabledActivePasswordField->setConstraints(Constraint0407);
		disabledActivePasswordField->setMaxSize(Vec2f(75,23));
    endEditCP(disabledActivePasswordField, PasswordField::EditableFieldMask | PasswordField::EnabledFieldMask | PasswordField::TextFieldMask | PasswordField::ConstraintsFieldMask | PasswordField::MaxSizeFieldMask);

    /******************************************************
                        Spinners
    ******************************************************/
    SpinnerPtr inactiveSpinner = osg::Spinner::create();
    SpinnerPtr activeSpinner = osg::Spinner::create();
    SpinnerPtr disabledInactiveSpinner = osg::Spinner::create();
    SpinnerPtr disabledActiveSpinner = osg::Spinner::create();

    inactiveSpinnerModel->setMaximum(10);
    inactiveSpinnerModel->setMinimum(-10);
    inactiveSpinnerModel->setStepSize(1);
    inactiveSpinnerModel->setValue(SharedFieldPtr(new SFInt32(0)));
    activeSpinnerModel->setMaximum(10);
    activeSpinnerModel->setMinimum(-10);
    activeSpinnerModel->setStepSize(1);
    activeSpinnerModel->setValue(SharedFieldPtr(new SFInt32(0)));
    disabledInactiveSpinnerModel->setMaximum(10);
    disabledInactiveSpinnerModel->setMinimum(-10);
    disabledInactiveSpinnerModel->setStepSize(1);
    disabledInactiveSpinnerModel->setValue(SharedFieldPtr(new SFInt32(0)));
    disabledActiveSpinnerModel->setMaximum(10);
    disabledActiveSpinnerModel->setMinimum(-10);
    disabledActiveSpinnerModel->setStepSize(1);
    disabledActiveSpinnerModel->setValue(SharedFieldPtr(new SFInt32(0)));
    inactiveSpinner->setModel(inactiveSpinnerModel);
    activeSpinner->setModel(activeSpinnerModel);
    disabledInactiveSpinner->setModel(disabledInactiveSpinnerModel);
    disabledActiveSpinner->setModel(disabledActiveSpinnerModel);

    beginEditCP(activeSpinner, Spinner::ConstraintsFieldMask | Spinner::MaxSizeFieldMask);
        activeSpinner->setConstraints(Constraint0108);
        activeSpinner->setMaxSize(Vec2f(50,25));
    endEditCP(activeSpinner, Spinner::ConstraintsFieldMask | Spinner::MaxSizeFieldMask);

    beginEditCP(inactiveSpinner, Spinner::ConstraintsFieldMask | Spinner::MaxSizeFieldMask);
        inactiveSpinner->setConstraints(Constraint0208);
        inactiveSpinner->setMaxSize(Vec2f(50,25));
    endEditCP(inactiveSpinner, Spinner::ConstraintsFieldMask | Spinner::MaxSizeFieldMask);
    inactiveSpinner->setEditable(false);

    beginEditCP(disabledActiveSpinner, Spinner::ConstraintsFieldMask | Spinner::EnabledFieldMask | Spinner::MaxSizeFieldMask);
        disabledActiveSpinner->setConstraints(Constraint0308);
        disabledActiveSpinner->setEnabled(false);
        disabledActiveSpinner->setMaxSize(Vec2f(50,25));
    endEditCP(disabledActiveSpinner, Spinner::ConstraintsFieldMask | Spinner::EnabledFieldMask | Spinner::MaxSizeFieldMask);

    beginEditCP(disabledInactiveSpinner, Spinner::ConstraintsFieldMask | Component::EnabledFieldMask | Spinner::MaxSizeFieldMask);
        disabledInactiveSpinner->setConstraints(Constraint0408);
        disabledInactiveSpinner->setEnabled(false);
        disabledInactiveSpinner->setMaxSize(Vec2f(50,25));
    endEditCP(disabledInactiveSpinner, Spinner::ConstraintsFieldMask | Component::EnabledFieldMask | Spinner::MaxSizeFieldMask);
    disabledInactiveSpinner->setEditable(false);

    /******************************************************
                        ComboBoxes
    ******************************************************/

    ComboBoxPtr editableComboBox = osg::ComboBox::create();
    ComboBoxPtr noneditableComboBox = osg::ComboBox::create();
    ComboBoxPtr disabledEditableComboBox = osg::ComboBox::create();
    ComboBoxPtr disabledNoneditableComboBox = osg::ComboBox::create();

	// Create Models
	editableComboBoxModel = DefaultMutableComboBoxModel::create();
	editableComboBoxModel->addElement(SharedFieldPtr(new SFString("Editable")));
	editableComboBoxModel->addElement(SharedFieldPtr(new SFString("These")));
	editableComboBoxModel->addElement(SharedFieldPtr(new SFString("Can")));
	editableComboBoxModel->addElement(SharedFieldPtr(new SFString("Be")));
	editableComboBoxModel->addElement(SharedFieldPtr(new SFString("Typed")));
	editableComboBoxModel->addElement(SharedFieldPtr(new SFString("Over")));
	

	noneditableComboBoxModel = DefaultMutableComboBoxModel::create();
	noneditableComboBoxModel->addElement(SharedFieldPtr(new SFString("Noneditable")));
	noneditableComboBoxModel->addElement(SharedFieldPtr(new SFString("These")));
	noneditableComboBoxModel->addElement(SharedFieldPtr(new SFString("Can")));
	noneditableComboBoxModel->addElement(SharedFieldPtr(new SFString("NOT")));
	noneditableComboBoxModel->addElement(SharedFieldPtr(new SFString("Be")));
	noneditableComboBoxModel->addElement(SharedFieldPtr(new SFString("Typed")));
	noneditableComboBoxModel->addElement(SharedFieldPtr(new SFString("Over")));


	// Create simple Models for disabled ComboBoxes
	disabledEditableComboBoxModel = DefaultMutableComboBoxModel::create();
	disabledEditableComboBoxModel->addElement(SharedFieldPtr(new SFString("Editable")));


	disabledNoneditableComboBoxModel = DefaultMutableComboBoxModel::create();
	disabledNoneditableComboBoxModel->addElement(SharedFieldPtr(new SFString("Noneditable")));


    beginEditCP(editableComboBox, ComboBox::ConstraintsFieldMask | ComboBox::ModelFieldMask);
        editableComboBox->setConstraints(Constraint0109);
		editableComboBox->setMaxSize(Vec2f(75, 23));
		editableComboBox->setModel(editableComboBoxModel);
    endEditCP(editableComboBox, ComboBox::ConstraintsFieldMask | ComboBox::ModelFieldMask);
	editableComboBox->setSelectedIndex(0);

    beginEditCP(noneditableComboBox, ComboBox::EditableFieldMask | ComboBox::ConstraintsFieldMask | ComboBox::MaxSizeFieldMask | ComboBox::ModelFieldMask);
        noneditableComboBox->setEditable(false);
        noneditableComboBox->setConstraints(Constraint0209);
		noneditableComboBox->setMaxSize(Vec2f(75, 23));
		noneditableComboBox->setModel(noneditableComboBoxModel);
    endEditCP(noneditableComboBox, ComboBox::EditableFieldMask | ComboBox::ConstraintsFieldMask | ComboBox::MaxSizeFieldMask | ComboBox::ModelFieldMask);
	noneditableComboBox->setSelectedIndex(0);

    beginEditCP(disabledEditableComboBox, ComboBox::EnabledFieldMask | ComboBox::ConstraintsFieldMask | ComboBox::MaxSizeFieldMask | ComboBox::ModelFieldMask);
        disabledEditableComboBox->setEnabled(false);
        disabledEditableComboBox->setConstraints(Constraint0309);
		disabledEditableComboBox->setMaxSize(Vec2f(75, 23));
		disabledEditableComboBox->setModel(disabledEditableComboBoxModel);
    endEditCP(disabledEditableComboBox, ComboBox::EnabledFieldMask | ComboBox::ConstraintsFieldMask | ComboBox::MaxSizeFieldMask | ComboBox::ModelFieldMask);
	disabledEditableComboBox->setSelectedIndex(0);

    beginEditCP(disabledNoneditableComboBox, ComboBox::EditableFieldMask | ComboBox::EnabledFieldMask | ComboBox::ConstraintsFieldMask | ComboBox::MaxSizeFieldMask | ComboBox::ModelFieldMask);
        disabledNoneditableComboBox->setEditable(false);
        disabledNoneditableComboBox->setEnabled(false);
        disabledNoneditableComboBox->setConstraints(Constraint0409);
		disabledNoneditableComboBox->setMaxSize(Vec2f(75, 23));
		disabledNoneditableComboBox->setModel(disabledNoneditableComboBoxModel);
    endEditCP(disabledNoneditableComboBox, ComboBox::EditableFieldMask | ComboBox::EnabledFieldMask | ComboBox::ConstraintsFieldMask | ComboBox::MaxSizeFieldMask | ComboBox::ModelFieldMask);
	disabledNoneditableComboBox->setSelectedIndex(0);

    /******************************************************
                        Labels
    ******************************************************/
    LabelPtr buttonLabel = osg::Label::create();
    LabelPtr toggleButtonLabel = osg::Label::create();
    LabelPtr radioButtonLabel = osg::Label::create();
    LabelPtr checkboxButtonLabel = osg::Label::create();
    LabelPtr textFieldLabel = osg::Label::create();
    LabelPtr textAreaLabel = osg::Label::create();
    LabelPtr passwordFieldLabel = osg::Label::create();
    LabelPtr spinnerLabel = osg::Label::create();
	LabelPtr comboboxLabel = osg::Label::create();
    LabelPtr enabledLabel = osg::Label::create();
    LabelPtr disabledLabel = osg::Label::create();
    EmptyUIBackgroundPtr labelBackground = osg::EmptyUIBackground::create();
    EmptyBorderPtr labelBorder = osg::EmptyBorder::create();
    beginEditCP(buttonLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
        buttonLabel->setText("Buttons");
        buttonLabel->setConstraints(Constraint0001);
        buttonLabel->setBackground(labelBackground);
        buttonLabel->setBorder(labelBorder);
    endEditCP(buttonLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);

    beginEditCP(toggleButtonLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
        toggleButtonLabel->setText("ToggleButtons");
        toggleButtonLabel->setConstraints(Constraint0002);
        toggleButtonLabel->setBackground(labelBackground);
        toggleButtonLabel->setBorder(labelBorder);
    endEditCP(toggleButtonLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);

    beginEditCP(radioButtonLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
        radioButtonLabel->setText("RadioButtons");
        radioButtonLabel->setConstraints(Constraint0003);
        radioButtonLabel->setBackground(labelBackground);
        radioButtonLabel->setBorder(labelBorder);
    endEditCP(radioButtonLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
    
    beginEditCP(checkboxButtonLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
        checkboxButtonLabel->setText("CheckboxButtons");
        checkboxButtonLabel->setConstraints(Constraint0004);
        checkboxButtonLabel->setBackground(labelBackground);
        checkboxButtonLabel->setBorder(labelBorder);
    endEditCP(checkboxButtonLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
    
    beginEditCP(textFieldLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
        textFieldLabel->setText("TextFields");
        textFieldLabel->setConstraints(Constraint0005);
        textFieldLabel->setBackground(labelBackground);
        textFieldLabel->setBorder(labelBorder);
    endEditCP(textFieldLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);

    beginEditCP(textAreaLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
        textAreaLabel->setText("TextAreas");
        textAreaLabel->setConstraints(Constraint0006);
        textAreaLabel->setBackground(labelBackground);
        textAreaLabel->setBorder(labelBorder);
    endEditCP(textAreaLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);

    beginEditCP(passwordFieldLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
        passwordFieldLabel->setText("PasswordFields");
        passwordFieldLabel->setConstraints(Constraint0007);
        passwordFieldLabel->setBackground(labelBackground);
        passwordFieldLabel->setBorder(labelBorder);
    endEditCP(passwordFieldLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);

    beginEditCP(spinnerLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
        spinnerLabel->setText("Spinners");
        spinnerLabel->setConstraints(Constraint0008);
        spinnerLabel->setBackground(labelBackground);
        spinnerLabel->setBorder(labelBorder);
    endEditCP(spinnerLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);

    beginEditCP(comboboxLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
        comboboxLabel->setText("ComboBoxes");
        comboboxLabel->setConstraints(Constraint0009);
        comboboxLabel->setBackground(labelBackground);
        comboboxLabel->setBorder(labelBorder);
    endEditCP(comboboxLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);

    beginEditCP(enabledLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
        enabledLabel->setText("Enabled");
        enabledLabel->setConstraints(Constraint0100);
        enabledLabel->setBackground(labelBackground);
        enabledLabel->setBorder(labelBorder);
    endEditCP(enabledLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);

    beginEditCP(disabledLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);
        disabledLabel->setText("Disabled");
        disabledLabel->setConstraints(Constraint0300);
        disabledLabel->setBackground(labelBackground);
        disabledLabel->setBorder(labelBorder);
    endEditCP(disabledLabel, Label::TextFieldMask | Label::ConstraintsFieldMask | Label::BackgroundFieldMask);

    beginEditCP(statePanel, Panel::ChildrenFieldMask | Panel::LayoutFieldMask  | Panel::PreferredSizeFieldMask);
        statePanel->getChildren().push_back(inactiveSpinner);
        statePanel->getChildren().push_back(activeSpinner);
        statePanel->getChildren().push_back(disabledInactiveSpinner);
        statePanel->getChildren().push_back(disabledActiveSpinner);
        statePanel->getChildren().push_back(inactiveButton);
        statePanel->getChildren().push_back(activeButton);
        statePanel->getChildren().push_back(disabledInactiveButton);
        statePanel->getChildren().push_back(disabledActiveButton);
        statePanel->getChildren().push_back(nonSelectedToggleButton);
        statePanel->getChildren().push_back(selectedToggleButton);
        statePanel->getChildren().push_back(disabledSelectedToggleButton);
        statePanel->getChildren().push_back(disabledNonselectedToggleButton);
        statePanel->getChildren().push_back(deselectedCheckboxButton);
        statePanel->getChildren().push_back(selectedCheckboxButton);
        statePanel->getChildren().push_back(disabledDeselectedCheckboxButton);
        statePanel->getChildren().push_back(disabledSelectedCheckboxButton);
        statePanel->getChildren().push_back(deselectedRadioButton);
        statePanel->getChildren().push_back(selectedRadioButton);
        statePanel->getChildren().push_back(disabledDeselectedRadioButton);
        statePanel->getChildren().push_back(disabledSelectedRadioButton);
        statePanel->getChildren().push_back(editableTextField);
        statePanel->getChildren().push_back(noneditableTextField);
        statePanel->getChildren().push_back(disabledEditableTextField);
        statePanel->getChildren().push_back(disabledNoneditableTextField);
        statePanel->getChildren().push_back(editableTextArea);
        statePanel->getChildren().push_back(noneditableTextArea);
        statePanel->getChildren().push_back(disabledEditableTextArea);
        statePanel->getChildren().push_back(disabledNoneditableTextArea);
        statePanel->getChildren().push_back(editablePasswordField);
        statePanel->getChildren().push_back(nonEditablePasswordField);
        statePanel->getChildren().push_back(disabledInactivePasswordField);
        statePanel->getChildren().push_back(disabledActivePasswordField);
        statePanel->getChildren().push_back(buttonLabel);
        statePanel->getChildren().push_back(toggleButtonLabel);
        statePanel->getChildren().push_back(radioButtonLabel);
        statePanel->getChildren().push_back(checkboxButtonLabel);
        statePanel->getChildren().push_back(textFieldLabel);
        statePanel->getChildren().push_back(textAreaLabel);
        statePanel->getChildren().push_back(passwordFieldLabel);
        statePanel->getChildren().push_back(spinnerLabel);
        statePanel->getChildren().push_back(comboboxLabel);
        statePanel->getChildren().push_back(enabledLabel);
        statePanel->getChildren().push_back(disabledLabel);
		statePanel->getChildren().push_back(editableComboBox);
        statePanel->getChildren().push_back(noneditableComboBox);
        statePanel->getChildren().push_back(disabledEditableComboBox);
        statePanel->getChildren().push_back(disabledNoneditableComboBox);
        statePanel->setLayout(statePanelLayout);
        statePanel->setPreferredSize(Vec2f(500,800));
    beginEditCP(statePanel, Panel::ChildrenFieldMask | Panel::LayoutFieldMask  | Panel::PreferredSizeFieldMask);

    return statePanel;

    }

    // Callback functions


// Redraw the window
void display(void)
{
    mgr->redraw();
}

// React to size changes
void reshape(Vec2f Size)
{
    mgr->resize(Size.x(), Size.y());
}
