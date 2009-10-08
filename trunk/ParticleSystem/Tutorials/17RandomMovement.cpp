// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGGroup.h>
#include <OpenSG/OSGViewport.h>
#include <OpenSG/Input/OSGWindowUtils.h>

// Input
#include <OpenSG/Input/OSGKeyListener.h>

#include <OpenSG/OSGBlendChunk.h>
#include <OpenSG/OSGPointChunk.h>
#include <OpenSG/OSGChunkMaterial.h>
#include <OpenSG/OSGMaterialChunk.h>
#include <OpenSG/ParticleSystem/OSGParticleSystem.h>
#include <OpenSG/ParticleSystem/OSGParticleSystemCore.h>
#include <OpenSG/ParticleSystem/OSGQuadParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGRandomMovementParticleAffector.h>
#include <OpenSG/ParticleSystem/OSGAttributeAttractRepelParticleAffector.h>


#include <OpenSG/Dynamics/OSGGaussianNormalDistribution1D.h>
#include <OpenSG/Dynamics/OSGCylinderDistribution3D.h>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;
WindowEventProducerPtr TutorialWindowEventProducer;

AttributeAttractRepelParticleAffectorPtr ExampleAttributeAttractRepelParticleAffector;
ParticleSystemPtr ExampleParticleSystem;
RandomMovementParticleAffectorPtr ExampleRMA;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);

FunctionPtr createPositionDistribution(void);
FunctionPtr createLifespanDistribution(void);

// Create a class to allow for the use of the Ctrl+q
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEventPtr e)
   {
       if(e->getKey() == KeyEvent::KEY_Q && e->getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
       {
            TutorialWindowEventProducer->closeWindow();
       }
	   else
	   {
		   switch(e->getKey())
		   {
		   case KeyEvent::KEY_R:
			   {
					beginEditCP(ExampleParticleSystem, ParticleSystem::AffectorsFieldMask);
						if(ExampleParticleSystem->getAffectors().find(ExampleRMA) == ExampleParticleSystem->getAffectors().end())
						{
							ExampleParticleSystem->getAffectors().push_back(ExampleRMA);
						}
						else
						{
							ExampleParticleSystem->getAffectors().erase(ExampleParticleSystem->getAffectors().find(ExampleRMA));
						}
					endEditCP(ExampleParticleSystem, ParticleSystem::AffectorsFieldMask);
			   }
			   break;
		   case KeyEvent::KEY_A:
					beginEditCP(ExampleParticleSystem, ParticleSystem::AffectorsFieldMask);
						if(ExampleParticleSystem->getAffectors().find(ExampleAttributeAttractRepelParticleAffector) == ExampleParticleSystem->getAffectors().end())
						{
							ExampleParticleSystem->getAffectors().push_back(ExampleAttributeAttractRepelParticleAffector);
						}
						else
						{
							ExampleParticleSystem->getAffectors().erase(ExampleParticleSystem->getAffectors().find(ExampleAttributeAttractRepelParticleAffector));
						}
					endEditCP(ExampleParticleSystem, ParticleSystem::AffectorsFieldMask);
			   break;
		   }
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
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();

    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

    TutorialKeyListener TheKeyListener;
    TutorialWindowEventProducer->addKeyListener(&TheKeyListener);
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindowEventProducer->addMouseListener(&TheTutorialMouseListener);
    TutorialWindowEventProducer->addMouseMotionListener(&TheTutorialMouseMotionListener);

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(MainWindow);
	
	//Particle System Material
	MaterialChunkPtr PSMaterialChunkChunk = MaterialChunk::create();
	beginEditCP(PSMaterialChunkChunk);
		PSMaterialChunkChunk->setAmbient(Color4f(0.3f,0.3f,0.3f,1.0f));
		PSMaterialChunkChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
		PSMaterialChunkChunk->setSpecular(Color4f(0.9f,0.9f,0.9f,1.0f));
		PSMaterialChunkChunk->setColorMaterial(GL_AMBIENT_AND_DIFFUSE);
	endEditCP(PSMaterialChunkChunk);

	ChunkMaterialPtr PSMaterial = ChunkMaterial::create();
	beginEditCP(PSMaterial, ChunkMaterial::ChunksFieldMask);
		PSMaterial->addChunk(PSMaterialChunkChunk);
	endEditCP(PSMaterial, ChunkMaterial::ChunksFieldMask);

	FunctionPtr PositionFunction = createPositionDistribution();
	
	Pnt3f PositionReturnValue;

	//Particle System
    FunctionIOParameterVector EmptyParameters;
	
    ExampleParticleSystem = osg::ParticleSystem::create();
	for(UInt32 i(0) ; i<500 ; ++i)//controls how many particles are created
	{
		if(PositionFunction != NullFC)
		{
			PositionReturnValue = 
				FunctionIOData<Pnt3f>::dcast(
				PositionFunction->evaluate(EmptyParameters).front().getDataPtr()
				)->getData();
		}

		ExampleParticleSystem->addParticle(
			PositionReturnValue,
			PositionReturnValue,
			Vec3f(0.0f,0.0f,1.0f),
			Color4f(1.0,0.0,0.0,1.0), 
			Vec3f(1.0,1.0,1.0), 
			-1, 0,
			Vec3f(0.0,0.0,0.0),			Vec3f(0.0f,0.0f,0.0f), //Velocity
			Vec3f(0.0f,0.0f,0.0f),	//acceleration
			StringToUInt32Map()	 );
	}
    ExampleParticleSystem->attachUpdateListener(TutorialWindowEventProducer);

	//Particle System Drawer
	QuadParticleSystemDrawerPtr ExampleParticleSystemDrawer = osg::QuadParticleSystemDrawer::create();
	

	//Particle System Node
    ParticleSystemCorePtr ParticleNodeCore = osg::ParticleSystemCore::create();
    beginEditCP(ParticleNodeCore, ParticleSystemCore::SystemFieldMask | ParticleSystemCore::DrawerFieldMask | ParticleSystemCore::MaterialFieldMask);
		ParticleNodeCore->setSystem(ExampleParticleSystem);
		ParticleNodeCore->setDrawer(ExampleParticleSystemDrawer);
		ParticleNodeCore->setMaterial(PSMaterial);
    endEditCP(ParticleNodeCore, ParticleSystemCore::SystemFieldMask | ParticleSystemCore::DrawerFieldMask | ParticleSystemCore::MaterialFieldMask);
    
	NodePtr ParticleNode = osg::Node::create();
    beginEditCP(ParticleNode, Node::CoreFieldMask);
        ParticleNode->setCore(ParticleNodeCore);
    endEditCP(ParticleNode, Node::CoreFieldMask);

	
    // Make Main Scene Node
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
        scene->setCore(osg::Group::create());
        scene->addChild(ParticleNode);
    endEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    mgr->setRoot(scene);

    // Show the whole Scene
    mgr->showAll();

	ExampleRMA = osg::RandomMovementParticleAffector::create();
	beginEditCP(ExampleRMA);
		ExampleRMA->setAmplitude(100.0f);
	endEditCP(ExampleRMA);
	addRefCP(ExampleRMA);

	ExampleAttributeAttractRepelParticleAffector = osg::AttributeAttractRepelParticleAffector::create();
	beginEditCP(ExampleAttributeAttractRepelParticleAffector);
		ExampleAttributeAttractRepelParticleAffector->setAttributeAffected(RandomMovementParticleAffector::POSITION_ATTRIBUTE);
		ExampleAttributeAttractRepelParticleAffector->setMinDistance(0.0);
		ExampleAttributeAttractRepelParticleAffector->setMaxDistance(10000000000000.0);
		ExampleAttributeAttractRepelParticleAffector->setQuadratic(0.01);
		ExampleAttributeAttractRepelParticleAffector->setLinear(0.01);
		ExampleAttributeAttractRepelParticleAffector->setConstant(0.0);
	endEditCP(ExampleAttributeAttractRepelParticleAffector);
	addRefCP(ExampleAttributeAttractRepelParticleAffector);

	beginEditCP(ExampleParticleSystem, ParticleSystem::AffectorsFieldMask | ParticleSystem::UpdateSecAttribsFieldMask);
		ExampleParticleSystem->getAffectors().push_back(ExampleRMA);
		ExampleParticleSystem->getAffectors().push_back(ExampleAttributeAttractRepelParticleAffector);
		ExampleParticleSystem->setUpdateSecAttribs(false);
	endEditCP(ExampleParticleSystem, ParticleSystem::AffectorsFieldMask | ParticleSystem::UpdateSecAttribsFieldMask);

    //Open Window
    Vec2f WinSize(TutorialWindowEventProducer->getDesktopSize() * 0.85f);
    Pnt2f WinPos((TutorialWindowEventProducer->getDesktopSize() - WinSize) *0.5);
    TutorialWindowEventProducer->openWindow(WinPos,
            WinSize,
            "17RandomMovement");

    //Enter main Loop
    TutorialWindowEventProducer->mainLoop();
    
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
void reshape(Vec2f Size)
{
    mgr->resize(Size.x(), Size.y());
}

FunctionPtr createPositionDistribution(void)
{
    //Cylinder Distribution
    CylinderDistribution3DPtr TheCylinderDistribution = CylinderDistribution3D::create();
    beginEditCP(TheCylinderDistribution);
      TheCylinderDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheCylinderDistribution->setInnerRadius(10.0);
      TheCylinderDistribution->setOuterRadius(30.0);
      TheCylinderDistribution->setMinTheta(0.0);
      TheCylinderDistribution->setMaxTheta(6.283185);
      TheCylinderDistribution->setHeight(50.0);
      TheCylinderDistribution->setNormal(Vec3f(0.0,0.0,1.0));
      TheCylinderDistribution->setSurfaceOrVolume(CylinderDistribution3D::SURFACE);
    endEditCP(TheCylinderDistribution);

    return TheCylinderDistribution;
}

FunctionPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(60.0f);
      TheLifespanDistribution->setStandardDeviation(10.0);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}
