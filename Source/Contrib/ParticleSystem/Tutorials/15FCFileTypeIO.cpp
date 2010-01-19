// Simple demonstration of XML file input
// Reads an XML file containing particle systems, and creates a scene with it

// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGGroup.h>
#include <OpenSG/Input/OSGWindowUtils.h>
// Input
#include <OpenSG/Input/OSGKeyListener.h>

#include <OpenSG/OSGPerspectiveCamera.h>
#include <OpenSG/OSGGradientBackground.h>
#include <OpenSG/OSGPolygonForeground.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGViewport.h>
#include <OpenSG/ParticleSystem/OSGParticleSystem.h>
#include <OpenSG/ParticleSystem/OSGParticleSystemCore.h>
#include <OpenSG/Toolbox/OSGFCFileHandler.h>

#include <boost/filesystem/operations.hpp>

// Activate the OpenSG namespace
// This is not strictly necessary, you can also prefix all OpenSG symbols
// with OSG::, but that would be a bit tedious for this example
OSG_USING_NAMESPACE


SimpleSceneManager *mgr;
WindowEventProducerPtr TutorialWindowEventProducer;

// mouse and keyboard support
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEventPtr e)
   {
       if(e->getKey() == KeyEvent::KEY_Q && e->getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
       {
            TutorialWindowEventProducer->closeWindow();
       }
	   if(e->getKey() == KeyEvent::KEY_S)
	   {
		   mgr->setStatistics(true);
	   }
	    if(e->getKey() == KeyEvent::KEY_A)
	   {
		   mgr->setStatistics(false);
	   }
   }

   virtual void keyReleased(const KeyEventPtr e)
   {
   }

   virtual void keyTyped(const KeyEventPtr e)
   {
   }
};

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEventPtr e)
    {
    }
    virtual void mouseEntered(const MouseEventPtr e)
    {
    }
    virtual void mouseExited(const MouseEventPtr e)
    {
    }
    virtual void mousePressed(const MouseEventPtr e)
    {
            mgr->mouseButtonPress(e->getButton(), e->getLocation().x(), e->getLocation().y());
    }
    virtual void mouseReleased(const MouseEventPtr e)
    {
           mgr->mouseButtonRelease(e->getButton(), e->getLocation().x(), e->getLocation().y());
    }
};

class TutorialMouseMotionListener : public MouseMotionListener
{
  public:
    virtual void mouseMoved(const MouseEventPtr e)
    {
            mgr->mouseMove(e->getLocation().x(), e->getLocation().y());
    }

    virtual void mouseDragged(const MouseEventPtr e)
    {
            mgr->mouseMove(e->getLocation().x(), e->getLocation().y());
    }
};

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

// Initialize GLUT & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);
    
	// Set up Window
    TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();

    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

	//Add Key Listener
    TutorialKeyListener TheKeyListener;
    TutorialWindowEventProducer->addKeyListener(&TheKeyListener);
	//Add Mouse Listeners
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindowEventProducer->addMouseListener(&TheTutorialMouseListener);
    TutorialWindowEventProducer->addMouseMotionListener(&TheTutorialMouseMotionListener);

	// Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(MainWindow);
	// open window

	/* Set up complete, now performing XML import */

    Path ExecutableDirectory(argv[0]);
    ExecutableDirectory.remove_leaf();
	Path FilePath;
    if(argc > 1)
    {
	    FilePath  = Path(argv[1]);
    }
	else
    {
		FilePath = Path("./Data/mayaExport1.xml");
    }

    if(!boost::filesystem::exists(FilePath))
    {
        std::cerr << "Could not find file by path: " << FilePath.string() << std::endl;
        osgExit();
        return -1;
    }

	
	// parse XML file to get field container data
	FCFileType::FCPtrStore NewContainers;
	NewContainers = FCFileHandler::the()->read(FilePath);

	// find root node from container, attach update listeners to particle systems
	std::vector<NodePtr> RootNodes;
    for(FCFileType::FCPtrStore::iterator Itor = NewContainers.begin() ; Itor != NewContainers.end() ; ++Itor)
    {
		// get root node
        if( (*Itor)->getType() == Node::getClassType() &&
            Node::Ptr::dcast(*Itor)->getParent() == NullFC)
        {
            RootNodes.push_back(Node::Ptr::dcast(*Itor));
        }
		else if( (*Itor)->getType() == ParticleSystem::getClassType()) //attach update listeners to particle systems present
		{
			ParticleSystemPtr ExampleParticleSystems = ParticleSystem::Ptr::dcast(*Itor);
			ExampleParticleSystems->attachUpdateListener(TutorialWindowEventProducer);
		}
    }

	// get root node that was extracted from XML file
	if(RootNodes.size() > 0)
	{
		NodePtr scene = RootNodes[0];

		// set root node
		mgr->setRoot(scene);

	}

	// Show the whole Scene
	mgr->showAll();
	mgr->setHeadlight(true);
	mgr->getCamera()->setFar(10000);

	std::cout << "Near " << mgr->getCamera()->getNear() << std::endl;
	std::cout << "Far " << mgr->getCamera()->getFar() << std::endl;

	std::cout << "FOV " << mgr->getCamera()->getFov() << std::endl;
	std::cout << "ToWorld " << mgr->getCamera()->getBeacon()->getToWorld() << std::endl;


	Pnt3f p(0.0,0.0,0.0);
	mgr->getCamera()->getBeacon()->getToWorld().mult(p);
	std::cout << "Pos " << p << std::endl;

	
	Vec3f v(0.0,0.0,-1.0);
	mgr->getCamera()->getBeacon()->getToWorld().mult(v);
	std::cout << "ViewDir " << v << std::endl;

	// main loop
    //Open Window
    Vec2f WinSize(TutorialWindowEventProducer->getDesktopSize() * 0.85f);
    Pnt2f WinPos((TutorialWindowEventProducer->getDesktopSize() - WinSize) *0.5);
    TutorialWindowEventProducer->openWindow(WinPos,
            WinSize,
            "15FCFileTypeIO");

    //Enter main Loop
    TutorialWindowEventProducer->mainLoop();
    

    osgExit();

    return 0;
}