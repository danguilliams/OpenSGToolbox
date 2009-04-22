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
#include <OpenSG/Input/OSGWindowAdapter.h>

#include <OpenSG/OSGBlendChunk.h>
#include <OpenSG/OSGPointChunk.h>
#include <OpenSG/OSGChunkMaterial.h>
#include <OpenSG/OSGMaterialChunk.h>
#include <OpenSG/OSGTextureChunk.h>
#include <OpenSG/OSGImageFileHandler.h>

#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGSceneFileHandler.h>

#include <OpenSG/ParticleSystem/OSGAgeFadeParticleAffector.h>
#include <OpenSG/ParticleSystem/OSGAgeSizeParticleAffector.h>
#include <OpenSG/ParticleSystem/OSGRateParticleGenerator.h>
#include <OpenSG/ParticleSystem/OSGBurstParticleGenerator.h>

#include <OpenSG/ParticleSystem/OSGParticleSystem.h>
#include <OpenSG/ParticleSystem/OSGParticleSystemCore.h>
#include <OpenSG/ParticleSystem/OSGNodeParticleSystemCore.h>
#include <OpenSG/ParticleSystem/OSGPointParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGBurstParticleGenerator.h>
#include <OpenSG/Dynamics/OSGSphereDistribution3D.h>
#include <OpenSG/Dynamics/OSGLineDistribution3D.h>

#include <OpenSG/Dynamics/OSGDataConverter.h>
#include <OpenSG/Dynamics/OSGCompoundFunction.h>
#include <OpenSG/Dynamics/OSGGaussianNormalDistribution1D.h>
#include <OpenSG/Dynamics/OSGCylinderDistribution3D.h>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;

bool ExitApp = false;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);
void ClickToGenerate(const MouseEvent& e);

FunctionPtr createPositionDistribution(void);
FunctionPtr createLifespanDistribution(void);
FunctionPtr createVelocityDistribution(void);
FunctionPtr createAccelerationDistribution(void);

FunctionPtr createFireballLifespanDistribution(void);
FunctionPtr createFireballAccelerationDistribution(void);
FunctionPtr createFireballPositionDistribution(void);
FunctionPtr createFireballVelocityDistribution(void);

//Create a Burst Particle Generator
BurstParticleGeneratorPtr ExampleBurstGenerator;

ParticleSystemPtr ExampleParticleSystem;

ParticleSystemPtr FireballParticleSystem;
BurstParticleGeneratorPtr FireballGenerator;
AgeSizeParticleAffectorPtr FireballAgeSizeParticleAffector;
PointParticleSystemDrawerPtr ExampleFireballParticleSystemDrawer;


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

	   if(e.getKey() == KeyEvent::KEY_B)//generate particles when clicked
	   {
		  /*//Attach the Generator to the Particle System
				beginEditCP(ExampleParticleSystem, ParticleSystem::GeneratorsFieldMask);
					ExampleParticleSystem->getGenerators().push_back(ExampleBurstGenerator);
				endEditCP(ExampleParticleSystem, ParticleSystem::GeneratorsFieldMask);
*/
		//Attach the Affector to the fireball Particle System
				beginEditCP(FireballParticleSystem, ParticleSystem::GeneratorsFieldMask | ParticleSystem::AffectorsFieldMask);
					FireballParticleSystem->getGenerators().push_back(FireballGenerator);
					FireballParticleSystem->getAffectors().push_back(FireballAgeSizeParticleAffector);
				endEditCP(FireballParticleSystem, ParticleSystem::GeneratorsFieldMask | ParticleSystem::AffectorsFieldMask);

	   }
   }

   virtual void keyReleased(const KeyEvent& e)
   {
   }

   virtual void keyTyped(const KeyEvent& e)
   {
   }
};

void ClickToGenerate(const MouseEvent& e)
{
	

}

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

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEvent& e)
    {
		if(e.getButton()== MouseEvent::BUTTON1)
		{

			
		}

		if(e.getButton()== MouseEvent::BUTTON3)
		{

		}

    }
    virtual void mouseEntered(const MouseEvent& e)
    {
    }
    virtual void mouseExited(const MouseEvent& e)
    {
    }
    virtual void mousePressed(const MouseEvent& e)
    {
            mgr->mouseButtonPress(e.getButton(), e.getLocation().x(), e.getLocation().y());
    }
    virtual void mouseReleased(const MouseEvent& e)
    {
           mgr->mouseButtonRelease(e.getButton(), e.getLocation().x(), e.getLocation().y());
    }
};

class TutorialMouseMotionListener : public MouseMotionListener
{
  public:
    virtual void mouseMoved(const MouseEvent& e)
    {
            mgr->mouseMove(e.getLocation().x(), e.getLocation().y());
    }

    virtual void mouseDragged(const MouseEvent& e)
    {
            mgr->mouseMove(e.getLocation().x(), e.getLocation().y());
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
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindowEventProducer->addMouseListener(&TheTutorialMouseListener);
    TutorialWindowEventProducer->addMouseMotionListener(&TheTutorialMouseMotionListener);

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(MainWindow);
	
    TutorialWindowEventProducer->openWindow(Pnt2f(0,0),
                                        Vec2f(1280,1024),
                                        "OpenSG 01ParticleSystemDrawer Window");
										

	//Particle System Material
	PointChunkPtr PSPointChunk = PointChunk::create();
	beginEditCP(PSPointChunk);
		PSPointChunk->setSize(5.0f);
		PSPointChunk->setSmooth(true);
	endEditCP(PSPointChunk);
	BlendChunkPtr PSBlendChunk = BlendChunk::create();
	PSBlendChunk->setSrcFactor(GL_SRC_ALPHA);
	PSBlendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);

	MaterialChunkPtr PSMaterialChunkChunk = MaterialChunk::create();
	beginEditCP(PSMaterialChunkChunk);
		PSMaterialChunkChunk->setAmbient(Color4f(0.3f,0.3f,0.3f,1.0f));
		PSMaterialChunkChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
		PSMaterialChunkChunk->setSpecular(Color4f(0.9f,0.9f,0.9f,1.0f));
		PSMaterialChunkChunk->setColorMaterial(GL_AMBIENT_AND_DIFFUSE);
	endEditCP(PSMaterialChunkChunk);

	ChunkMaterialPtr PSMaterial = ChunkMaterial::create();
	beginEditCP(PSMaterial, ChunkMaterial::ChunksFieldMask);
		PSMaterial->addChunk(PSPointChunk);
		PSMaterial->addChunk(PSMaterialChunkChunk);
		PSMaterial->addChunk(PSBlendChunk);
	endEditCP(PSMaterial, ChunkMaterial::ChunksFieldMask);

	//Fireball
	FireballParticleSystem = osg::ParticleSystem::create();
	FireballParticleSystem->attachUpdateListener(TutorialWindowEventProducer);

	//Fireball
	ExampleFireballParticleSystemDrawer = osg::PointParticleSystemDrawer::create();
    ExampleFireballParticleSystemDrawer->setForcePerParticleSizing(true);

	//Particle System
		
    ExampleParticleSystem = osg::ParticleSystem::create();
				ExampleParticleSystem->addParticle(Pnt3f(0,0,0),
					Vec3f(0.0,0.0f,1.0f),
					Color4f(1.0,0.0,0.0,1.0), 
					Vec3f(1.0,1.0,1.0), 
					5, 
					Vec3f(0.0f,0.0f,0.0f), //Velocity
					Vec3f(0.0f,0.0f,0.0f)
					,0);
				ExampleParticleSystem->addParticle(Pnt3f(100,100,100),
					Vec3f(0.0,0.0f,1.0f),
					Color4f(1.0,0.0,0.0,1.0), 
					Vec3f(1.0,1.0,1.0), 
					5, 
					Vec3f(0.0f,0.0f,0.0f), //Velocity
					Vec3f(0.0f,0.0f,0.0f)
					,0);
			ExampleParticleSystem->attachUpdateListener(TutorialWindowEventProducer);

    FunctionIOParameterVector EmptyParameters;

	//Particle System Drawer
	PointParticleSystemDrawerPtr ExampleParticleSystemDrawer = osg::PointParticleSystemDrawer::create();
	



	ExampleBurstGenerator = osg::BurstParticleGenerator::create();
	//Attach the function objects to the Generator
	beginEditCP(ExampleBurstGenerator, BurstParticleGenerator::PositionFunctionFieldMask | BurstParticleGenerator::LifespanFunctionFieldMask);
		ExampleBurstGenerator->setPositionFunction(createPositionDistribution());
		ExampleBurstGenerator->setLifespanFunction(createLifespanDistribution());
		ExampleBurstGenerator->setBurstAmount(50.0);
		ExampleBurstGenerator->setVelocityFunction(createVelocityDistribution());
		ExampleBurstGenerator->setAccelerationFunction(createAccelerationDistribution());
	endEditCP(ExampleBurstGenerator, BurstParticleGenerator::PositionFunctionFieldMask | BurstParticleGenerator::LifespanFunctionFieldMask);
	
	

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

	//fireball

	FireballGenerator = osg::BurstParticleGenerator::create();
	NodePtr FireballParticlePrototypeNode = SceneFileHandler::the().read("Data/bubble.obj");

	NodeParticleSystemCorePtr FireballParticleNodeCore = osg::NodeParticleSystemCore::create();
    beginEditCP(FireballParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
		FireballParticleNodeCore->setSystem(FireballParticleSystem);
		FireballParticleNodeCore->setPrototypeNode(FireballParticlePrototypeNode);
	 endEditCP(FireballParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
			//Attach the function objects to the Generator
	beginEditCP(FireballGenerator, RateParticleGenerator::PositionFunctionFieldMask | RateParticleGenerator::LifespanFunctionFieldMask | RateParticleGenerator::GenerationRateFieldMask);
		FireballGenerator->setPositionFunction(createFireballPositionDistribution());
		FireballGenerator->setLifespanFunction(createFireballLifespanDistribution());
		FireballGenerator->setBurstAmount(500.0);
		FireballGenerator->setVelocityFunction(createFireballVelocityDistribution());
		FireballGenerator->setAccelerationFunction(createFireballAccelerationDistribution());
	endEditCP(FireballGenerator, RateParticleGenerator::PositionFunctionFieldMask | RateParticleGenerator::LifespanFunctionFieldMask | RateParticleGenerator::GenerationRateFieldMask);
			//Attach the function objects the Affectors
	FireballAgeSizeParticleAffector = osg::AgeSizeParticleAffector::create();
	beginEditCP(FireballAgeSizeParticleAffector,AgeSizeParticleAffector::AgesFieldMask | AgeSizeParticleAffector::SizesFieldMask);
			//ages
			FireballAgeSizeParticleAffector->getAges().push_back(0.1);
			FireballAgeSizeParticleAffector->getAges().push_back(0.2);
			FireballAgeSizeParticleAffector->getAges().push_back(0.3);
			FireballAgeSizeParticleAffector->getAges().push_back(0.5);
			FireballAgeSizeParticleAffector->getAges().push_back(0.7);
			FireballAgeSizeParticleAffector->getAges().push_back(0.8);
			FireballAgeSizeParticleAffector->getAges().push_back(1.0);

			//sizes
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(2.0,2.0,2.0));
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(2.3,2.3,2.3));
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(2.5,2.5,2.5));
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(3.0,3.0,3.0));
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(4.0,4.0,4.0));
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(5.0,5.0,5.0));
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(6.5,6.5,6.5));
	endEditCP(FireballAgeSizeParticleAffector,AgeSizeParticleAffector::AgesFieldMask | AgeSizeParticleAffector::SizesFieldMask);
   
	NodePtr FireballParticleNode = osg::Node::create();
    beginEditCP(FireballParticleNode, Node::CoreFieldMask);
        FireballParticleNode->setCore(FireballParticleNodeCore);
    endEditCP(FireballParticleNode, Node::CoreFieldMask);
		//end/////////////////////


    // Make Main Scene Node and add the Torus
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
        scene->setCore(osg::Group::create());
        scene->addChild(ParticleNode);
		scene->addChild(FireballParticleNode);
    endEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    mgr->setRoot(scene);

    // Show the whole Scene
    mgr->showAll();


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
void reshape(Vec2f Size)
{
    mgr->resize(Size.x(), Size.y());
}

FunctionPtr createPositionDistribution(void)
{
   

	 //Sphere Distribution
    SphereDistribution3DPtr TheSphereDistribution = SphereDistribution3D::create();
    beginEditCP(TheSphereDistribution);
      TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheSphereDistribution->setInnerRadius(0.0);
      TheSphereDistribution->setOuterRadius(3.0);
      TheSphereDistribution->setMinTheta(0.0);
      TheSphereDistribution->setMaxTheta(6.283185);
      TheSphereDistribution->setMinZ(-1.0);
      TheSphereDistribution->setMaxZ(1.0);
	  TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::SURFACE);
    endEditCP(TheSphereDistribution);

    return TheSphereDistribution;
}

FunctionPtr createVelocityDistribution(void)
{
   

	 //Sphere Distribution
    SphereDistribution3DPtr TheSphereDistribution = SphereDistribution3D::create();
    beginEditCP(TheSphereDistribution);
      TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheSphereDistribution->setInnerRadius(3.0);
      TheSphereDistribution->setOuterRadius(10.0);
      TheSphereDistribution->setMinTheta(-3.141950);
      TheSphereDistribution->setMaxTheta(3.141950);
      TheSphereDistribution->setMinZ(-1.0);
      TheSphereDistribution->setMaxZ(1.0);
	  TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::VOLUME);
    endEditCP(TheSphereDistribution);

	DataConverterPtr TheVec3fConverter = DataConverter::create();
	beginEditCP(TheVec3fConverter);
		TheVec3fConverter->setToType(&FieldDataTraits<Vec3f>::getType());
	endEditCP(TheVec3fConverter);

	CompoundFunctionPtr TheVelocityDistribution = CompoundFunction::create();
	beginEditCP(TheVelocityDistribution);
		TheVelocityDistribution->getFunctions().push_back(TheSphereDistribution);
		TheVelocityDistribution->getFunctions().push_back(TheVec3fConverter);
	endEditCP(TheVelocityDistribution);

    return TheVelocityDistribution;
}



FunctionPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(05.0f);
      TheLifespanDistribution->setStandardDeviation(10.0);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}

FunctionPtr createAccelerationDistribution(void)
{

	 //Sphere Distribution
    LineDistribution3DPtr TheLineDistribution = LineDistribution3D::create();
    beginEditCP(TheLineDistribution);
      TheLineDistribution->setPoint1(Pnt3f(0.0,0.0,-3.0));
	  TheLineDistribution->setPoint2(Pnt3f(0.0,0.0,-3.0));
    endEditCP(TheLineDistribution);

	DataConverterPtr TheVec3fConverter = DataConverter::create();
	beginEditCP(TheVec3fConverter);
		TheVec3fConverter->setToType(&FieldDataTraits<Vec3f>::getType());
	endEditCP(TheVec3fConverter);

	CompoundFunctionPtr TheAccelerationDistribution = CompoundFunction::create();
	beginEditCP(TheAccelerationDistribution);
		TheAccelerationDistribution->getFunctions().push_back(TheLineDistribution);
		TheAccelerationDistribution->getFunctions().push_back(TheVec3fConverter);
	endEditCP(TheAccelerationDistribution);

    return TheAccelerationDistribution;
}
FunctionPtr createFireballVelocityDistribution(void)
{
	 //Sphere Distribution
    SphereDistribution3DPtr TheSphereDistribution = SphereDistribution3D::create();
    beginEditCP(TheSphereDistribution);
      TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheSphereDistribution->setInnerRadius(3.0);
      TheSphereDistribution->setOuterRadius(5.0);
      TheSphereDistribution->setMinTheta(-3.141950);
      TheSphereDistribution->setMaxTheta(3.141950);
      TheSphereDistribution->setMinZ(-1.0);
      TheSphereDistribution->setMaxZ(1.0);
	  TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::VOLUME);
    endEditCP(TheSphereDistribution);

	DataConverterPtr TheVec3fConverter = DataConverter::create();
	beginEditCP(TheVec3fConverter);
		TheVec3fConverter->setToType(&FieldDataTraits<Vec3f>::getType());
	endEditCP(TheVec3fConverter);

	CompoundFunctionPtr TheVelocityDistribution = CompoundFunction::create();
	beginEditCP(TheVelocityDistribution);
		TheVelocityDistribution->getFunctions().push_back(TheSphereDistribution);
		TheVelocityDistribution->getFunctions().push_back(TheVec3fConverter);
	endEditCP(TheVelocityDistribution);

    return TheVelocityDistribution;
}
FunctionPtr createFireballPositionDistribution(void)
{
     //Sphere Distribution
    SphereDistribution3DPtr TheSphereDistribution = SphereDistribution3D::create();
    beginEditCP(TheSphereDistribution);
      TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheSphereDistribution->setInnerRadius(0.0);
      TheSphereDistribution->setOuterRadius(50.0);
      TheSphereDistribution->setMinTheta(0.0);
      TheSphereDistribution->setMaxTheta(6.283185);
      TheSphereDistribution->setMinZ(-1.0);
      TheSphereDistribution->setMaxZ(1.0);
	  TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::SURFACE);
    endEditCP(TheSphereDistribution);

    return TheSphereDistribution;
}

FunctionPtr createFireballAccelerationDistribution(void)
{

	 //Sphere Distribution
    LineDistribution3DPtr TheLineDistribution = LineDistribution3D::create();
    beginEditCP(TheLineDistribution);
      TheLineDistribution->setPoint1(Pnt3f(0.0,0.0,1.0));
	  TheLineDistribution->setPoint2(Pnt3f(0.0,0.0,1.0));
    endEditCP(TheLineDistribution);

	DataConverterPtr TheVec3fConverter = DataConverter::create();
	beginEditCP(TheVec3fConverter);
		TheVec3fConverter->setToType(&FieldDataTraits<Vec3f>::getType());
	endEditCP(TheVec3fConverter);

	CompoundFunctionPtr TheAccelerationDistribution = CompoundFunction::create();
	beginEditCP(TheAccelerationDistribution);
		TheAccelerationDistribution->getFunctions().push_back(TheLineDistribution);
		TheAccelerationDistribution->getFunctions().push_back(TheVec3fConverter);
	endEditCP(TheAccelerationDistribution);

    return TheAccelerationDistribution;
} 
FunctionPtr createFireballLifespanDistribution(void)
{
    GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(6.0f);
      TheLifespanDistribution->setStandardDeviation(0.5);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}
