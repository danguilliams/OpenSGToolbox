// 
// OpenSGToolbox Tutorial: 07MaterialLibraryTest
//
// Demonstrates use of Material Library
//

// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGGroup.h>
#include <OpenSG/OSGViewport.h>
#include <OpenSG/OSGSimpleGeometry.h>
#include <OpenSG/OSGLineChunk.h>
#include <OpenSG/OSGBlendChunk.h>
#include <OpenSG/OSGChunkMaterial.h>
#include <OpenSG/OSGMaterialChunk.h>
#include <OpenSG/OSGPolygonChunk.h>
#include <OpenSG/OSGSHLChunk.h>
#include <OpenSG/OSGSHLParameterChunk.h>
#include <OpenSG/OSGShaderParameterVec4f.h>
#include <OpenSG/OSGShaderParameterReal.h>
#include <OpenSG/OSGShaderParameterBool.h>
#include <OpenSG/OSGMultiPassMaterial.h>
#include <OpenSG/OSGDepthChunk.h>
#include <OpenSG/OSGCubeTextureChunk.h>
#include <OpenSG/OSGImageFileHandler.h>
#include <OpenSG/OSGSkyBackground.h>
#include <OpenSG/Toolbox/OSGMaterialLibrary.h>

// Input
#include <OpenSG/Input/OSGKeyListener.h>
#include <OpenSG/Input/OSGWindowAdapter.h>
#include <OpenSG/Input/OSGWindowUtils.h>

// output
#include <OpenSG/Toolbox/OSGFCFileHandler.h>
#include <sstream>

//Animation
#include <OpenSG/Animation/OSGKeyframeSequences.h>
#include <OpenSG/Animation/OSGKeyframeAnimator.h>
#include <OpenSG/Animation/OSGFieldAnimation.h>
#include <OpenSG/Animation/OSGElapsedTimeAnimationAdvancer.h>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;
WindowEventProducerPtr TutorialWindowEventProducer;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);

MaterialPtr createGoochMaterial(void);
MaterialPtr createSimpleGlassMaterial(void);
MaterialPtr createComplexGlassMaterial(void);

std::string createSHLVertexProgGooch(void);
std::string createSHLFragProgGooch(void);
std::string createSHLVertexProgBlack(void);
std::string createSHKFragProgBlack(void);
std::string createGlassVertexProg(void);
std::string createGlassFragProg(void);
std::string createComplexGlassVertexProg(void);
std::string createComplexGlassFragProg(void);


BackgroundPtr createBackground(void);


// Create a class to allow for the use of the keyboard shortcuts 
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEvent& e)
   {
       if(e.getKey() == KeyEvent::KEY_Q && e.getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
       {
           TutorialWindowEventProducer->closeWindow();
       }
   }

   virtual void keyReleased(const KeyEvent& e)
   {
   }

   virtual void keyTyped(const KeyEvent& e)
   {
   }
};

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEvent& e)
    {
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

class TutorialUpdateListener : public UpdateListener
{
  public:
    virtual void update(const UpdateEvent& e)
    {

    }
};

struct GoochMat {
	MaterialPtr operator()(void) const
	{ 
		return createGoochMaterial();
	}
};

struct SimpleGlassMat {
	MaterialPtr operator()(void)const
	{
		return createSimpleGlassMaterial();
	}
};

struct ComplexGlassMat {
	MaterialPtr operator()(void)const
	{
		return createComplexGlassMaterial();
	}
};

struct InitGoochMat{
	InitGoochMat()
	{
		MaterialLibrary::MaterialFunction f = GoochMat();
		MaterialLibrary::the()->addMaterialFunction("Gooch", f);
		f = SimpleGlassMat();
		MaterialLibrary::the()->addMaterialFunction("SimpleGlass", f);
		f = ComplexGlassMat();
		MaterialLibrary::the()->addMaterialFunction("ComplexGlass", f);
	}
} MyInitGoochMat;

int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();

    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

    //Add Window Listener
    TutorialKeyListener TheKeyListener;
    TutorialWindowEventProducer->addKeyListener(&TheKeyListener);
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindowEventProducer->addMouseListener(&TheTutorialMouseListener);
    TutorialWindowEventProducer->addMouseMotionListener(&TheTutorialMouseMotionListener);
	TutorialUpdateListener TheTutorialUpdateListener;
    TutorialWindowEventProducer->addUpdateListener(&TheTutorialUpdateListener);

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(MainWindow);

	//Torus Node
	GeometryPtr TorusGeometry = makeTorusGeo(3.0f,15.0f, 32,32);
	GeometryPtr CylinderGeometry = makeCylinderGeo(10.0f,10.0f,32,true,true,true);
	GeometryPtr SphereGeometry = makeSphereGeo(3,5.0f);

	beginEditCP(CylinderGeometry, Geometry::MaterialFieldMask);
		//CylinderGeometry->setMaterial(MaterialLibrary::the()->createMaterial("Gooch"));
		CylinderGeometry->setMaterial(MaterialLibrary::the()->createMaterial("SimpleGlass"));
	endEditCP(CylinderGeometry, Geometry::MaterialFieldMask);

	beginEditCP(TorusGeometry, Geometry::MaterialFieldMask);
		TorusGeometry->setMaterial(MaterialLibrary::the()->createMaterial("SimpleGlass"));
	endEditCP(TorusGeometry, Geometry::MaterialFieldMask);

	beginEditCP(SphereGeometry, Geometry::MaterialFieldMask);
		SphereGeometry->setMaterial(MaterialLibrary::the()->createMaterial("ComplexGlass"));
	endEditCP(SphereGeometry, Geometry::MaterialFieldMask);


	NodePtr TorusNode = Node::create();
    beginEditCP(TorusNode, Node::CoreFieldMask);
        TorusNode->setCore(TorusGeometry);
    endEditCP(TorusNode, Node::CoreFieldMask);

	NodePtr SphereNode = Node::create();
    beginEditCP(SphereNode, Node::CoreFieldMask);
		SphereNode->setCore(SphereGeometry);
    endEditCP(SphereNode, Node::CoreFieldMask);

	NodePtr CylinderNode = Node::create();
    beginEditCP(CylinderNode, Node::CoreFieldMask);
		CylinderNode->setCore(CylinderGeometry);
    endEditCP(CylinderNode, Node::CoreFieldMask);

    // Make Main Scene Node
    NodePtr scene = Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
        scene->setCore(Group::create());
		//scene->addChild(TorusNode);
		scene->addChild(SphereNode);
		//scene->addChild(CylinderNode);
    endEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    mgr->setRoot(scene);


	mgr->getWindow()->getPort(0)->setBackground(createBackground());

    // Show the whole Scene
    mgr->showAll();

    //Open Window
    Vec2f WinSize(TutorialWindowEventProducer->getDesktopSize() * 0.85f);
    Pnt2f WinPos((TutorialWindowEventProducer->getDesktopSize() - WinSize) *0.5);
    TutorialWindowEventProducer->openWindow(WinPos,WinSize, "07MaterialLibrary");

    //Main Loop
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

// create a gooch material
MaterialPtr createGoochMaterial(void)
{
	/*	 Creating Shader Materials and Parameters
		 Creating the materials/chunks used by OpenSG to implement a shader */
	BlendChunkPtr ExampleBlendChunk = BlendChunk::create();
	beginEditCP(ExampleBlendChunk);
	    ExampleBlendChunk->setSrcFactor(GL_SRC_ALPHA);
	    ExampleBlendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);
	endEditCP(ExampleBlendChunk);

	//Material Chunk
	MaterialChunkPtr ShaderMaterialChunk = MaterialChunk::create();
	beginEditCP(ShaderMaterialChunk);
		ShaderMaterialChunk->setAmbient(Color4f(0.4f,0.4f,0.4f,1.0f));
		ShaderMaterialChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
		ShaderMaterialChunk->setSpecular(Color4f(1.0f,1.0f,1.0f,1.0f));
	endEditCP(ShaderMaterialChunk);

	// Polygon Chunk
	PolygonChunkPtr GoochShaderPolyChunk = PolygonChunk::create();
	beginEditCP(GoochShaderPolyChunk);
		GoochShaderPolyChunk->setCullFace(GL_BACK);
		GoochShaderPolyChunk->setBackMode(GL_FILL);
		GoochShaderPolyChunk->setFrontMode(GL_FILL);
	beginEditCP(GoochShaderPolyChunk);
	
	//Depth Chunk 
	DepthChunkPtr GoochDepthChunk = DepthChunk::create();
	beginEditCP(GoochDepthChunk);		
		GoochDepthChunk->setFunc(GL_LESS);
	endEditCP(GoochDepthChunk);

	//Shader Chunk
	SHLChunkPtr TheSHLChunk = SHLChunk::create();
	beginEditCP(TheSHLChunk);
		TheSHLChunk->setVertexProgram(createSHLVertexProgGooch());
		TheSHLChunk->setFragmentProgram(createSHLFragProgGooch());
	endEditCP(TheSHLChunk);

	//Shader Parameters
	ShaderParameterVec4fPtr WarmColorParameter = ShaderParameterVec4f::create();
	beginEditCP(WarmColorParameter);
		WarmColorParameter->setName("WarmColor");
		WarmColorParameter->setValue(Vec4f(0.6f,0.6f,0.0f,1.0f));
	endEditCP(WarmColorParameter);
	
	ShaderParameterVec4fPtr CoolColorParameter = ShaderParameterVec4f::create();
	beginEditCP(CoolColorParameter);
		CoolColorParameter->setName("CoolColor");
		CoolColorParameter->setValue(Vec4f(0.0f,0.0f,0.6f,1.0f));
	endEditCP(CoolColorParameter);

	ShaderParameterVec4fPtr SurfaceColorParameter = ShaderParameterVec4f::create();
	beginEditCP(SurfaceColorParameter);
		SurfaceColorParameter->setName("SurfaceColor");
		SurfaceColorParameter->setValue(Vec4f(0.75f,0.75f,0.75f,1.0f));
	endEditCP(SurfaceColorParameter);

	ShaderParameterRealPtr DiffuseWarmParameter = ShaderParameterReal::create();
	beginEditCP(DiffuseWarmParameter);
		DiffuseWarmParameter->setName("DiffuseWarm");
		DiffuseWarmParameter->setValue(0.45);
	endEditCP(DiffuseWarmParameter);

	ShaderParameterRealPtr DiffuseCoolParameter = ShaderParameterReal::create();
	beginEditCP(DiffuseCoolParameter);
		DiffuseCoolParameter->setName("DiffuseCool");
		DiffuseCoolParameter->setValue(0.45);
	endEditCP(DiffuseCoolParameter);

	//Shader Parameter Chunk
	SHLParameterChunkPtr SHLParameters = SHLParameterChunk::create();
	beginEditCP(SHLParameters);
		SHLParameters->getParameters().push_back(WarmColorParameter);
		SHLParameters->getParameters().push_back(CoolColorParameter);
		SHLParameters->getParameters().push_back(SurfaceColorParameter);
		SHLParameters->getParameters().push_back(DiffuseWarmParameter);
		SHLParameters->getParameters().push_back(DiffuseCoolParameter);
		SHLParameters->setSHLChunk(TheSHLChunk);
	endEditCP(SHLParameters);

	// adding all materials
	ChunkMaterialPtr GoochMaterial = ChunkMaterial::create();
	beginEditCP(GoochMaterial, ChunkMaterial::ChunksFieldMask);
		GoochMaterial->addChunk(ShaderMaterialChunk);
		GoochMaterial->addChunk(TheSHLChunk);
		GoochMaterial->addChunk(SHLParameters);
		GoochMaterial->addChunk(GoochShaderPolyChunk);
		GoochMaterial->addChunk(GoochDepthChunk);
	endEditCP(GoochMaterial, ChunkMaterial::ChunksFieldMask);

	//Black outline shading materials
	SHLChunkPtr TheBlackSHLChunk = SHLChunk::create();
	beginEditCP(TheBlackSHLChunk);
		TheBlackSHLChunk->setVertexProgram(createSHLVertexProgBlack());
		TheBlackSHLChunk->setFragmentProgram(createSHKFragProgBlack());
	endEditCP(TheBlackSHLChunk);

	// line chunk for setting width of outline
	LineChunkPtr BlackShaderLineChunk = LineChunk::create();
	beginEditCP(BlackShaderLineChunk);
		BlackShaderLineChunk->setWidth(3.5);
		BlackShaderLineChunk->setSmooth(false);
	endEditCP(BlackShaderLineChunk);

	// only drawing back-facing polygons
	PolygonChunkPtr BlackShaderPolyChunk = PolygonChunk::create();
	beginEditCP(BlackShaderPolyChunk);
		BlackShaderPolyChunk->setCullFace(GL_FRONT);
		BlackShaderPolyChunk->setBackMode(GL_LINE);
	beginEditCP(BlackShaderPolyChunk);

	// depth chunk for black outlining
	DepthChunkPtr BlackDepthChunk = DepthChunk::create();
	beginEditCP(BlackDepthChunk);		
		BlackDepthChunk->setFunc(GL_LEQUAL);
	endEditCP(BlackDepthChunk);

	ChunkMaterialPtr BlackFragmentMaterial = ChunkMaterial::create();
	beginEditCP(BlackFragmentMaterial, ChunkMaterial::ChunksFieldMask);
		BlackFragmentMaterial->addChunk(ShaderMaterialChunk);
		BlackFragmentMaterial->addChunk(TheBlackSHLChunk);
		BlackFragmentMaterial->addChunk(BlackShaderPolyChunk);
		BlackFragmentMaterial->addChunk(BlackShaderLineChunk);
		BlackFragmentMaterial->addChunk(BlackDepthChunk);
	endEditCP(BlackFragmentMaterial, ChunkMaterial::ChunksFieldMask);

	// Mulit-Pass material to combine gooch and black outline shading
	MultiPassMaterialPtr ShaderMaterial = MultiPassMaterial::create();
	beginEditCP(ShaderMaterial);
		ShaderMaterial->addMaterial(GoochMaterial);
		ShaderMaterial->addMaterial(BlackFragmentMaterial);
	endEditCP(ShaderMaterial);

	return ShaderMaterial;
}

std::string createSHLVertexProgGooch(void)
{
	std::ostringstream VertexProgStream;
	VertexProgStream
	<< "varying out vec3 ReflectVec;\n"
	<< "varying out vec3 ViewVec;\n"
	<< "varying out float NdotL;\n"

	<< "void main(void)\n"
	<< "{ \n"
	<< "  vec3 ecPos = vec3(gl_ModelViewMatrix * gl_Vertex);\n"
	<< "  ViewVec = normalize(-ecPos);\n"
	<< "  vec3 tnorm = normalize(gl_NormalMatrix * gl_Normal);\n"
	<< "  vec3 lightVec = normalize(gl_LightSource[0].position - ecPos);\n"
	<< "  ReflectVec = normalize(reflect(-lightVec, tnorm));\n"
	<< "  NdotL = dot(lightVec, tnorm) * 0.5 + 0.5;\n"
	<< "  gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n" 
	<< "}\n" ;

	return  VertexProgStream.str();
}

std::string createSHLFragProgGooch(void)
{
	std::ostringstream FragProgStream;

	FragProgStream
	<< "uniform vec4 SurfaceColor;\n" 
	<< "uniform vec4 WarmColor;\n" 
	<< "uniform vec4 CoolColor;\n" 
	<< "uniform float DiffuseWarm;\n" 
	<< "uniform float DiffuseCool;\n" 
	<< "in float NdotL;\n" 
	<< "in vec3 ReflectVec;\n" 
	<< "in vec3 ViewVec;\n" 
	<< "void main(void)\n" 
	<< "{\n" 
	<< "   vec3 kcool = min(CoolColor.xyz + DiffuseCool * SurfaceColor.xyz, 1.0);\n" 
	<< "   vec3 kwarm = min(WarmColor.xyz + DiffuseWarm * SurfaceColor.xyz, 1.0);\n" 
	<< "   vec3 kfinal = mix(kcool,kwarm,NdotL);\n" 
	<< "   vec3 nreflect = normalize(ReflectVec);\n" 
	<< "   vec3 nview = normalize(ViewVec); \n" 
	<< "   float spec = max(dot(nreflect, nview), 0.0);\n" 
 	<< "   spec = pow(spec, 32.0);\n" 
	<< "   gl_FragColor = vec4(min(kfinal + spec, 1.0), 1.0);\n" 
	<< "}\n" ;

	return  FragProgStream.str();
}

std::string createSHLVertexProgBlack(void)
{
	return "";
}
std::string createSHKFragProgBlack(void)
{
	std::ostringstream FragProgStream;

	FragProgStream
	<< "void main(void)\n"
	<< "{\n"
    << "\tgl_FragColor = vec4( 0.0, 0.0, 0.0, 1.0 );\n"
	<< "}\n";

	return FragProgStream.str();
}

MaterialPtr createSimpleGlassMaterial(void)
{

	BlendChunkPtr ExampleBlendChunk = BlendChunk::create();
	beginEditCP(ExampleBlendChunk);
	    ExampleBlendChunk->setSrcFactor(GL_SRC_ALPHA);
	    ExampleBlendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);
	endEditCP(ExampleBlendChunk);

	//Depth Chunk, default parameters used 
	DepthChunkPtr GlassDepthChunk = DepthChunk::create();
	
	// culling back-facing polygons
	PolygonChunkPtr GlassShaderPolyChunk = PolygonChunk::create();
	beginEditCP(GlassShaderPolyChunk);
		GlassShaderPolyChunk->setCullFace(GL_BACK);
	beginEditCP(GlassShaderPolyChunk);

	//Material Chunk
	MaterialChunkPtr ShaderMaterialChunk = MaterialChunk::create();
	beginEditCP(ShaderMaterialChunk);
		ShaderMaterialChunk->setAmbient(Color4f(0.4f,0.4f,0.4f,1.0f));
		ShaderMaterialChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
		ShaderMaterialChunk->setSpecular(Color4f(1.0f,1.0f,1.0f,1.0f));
	endEditCP(ShaderMaterialChunk);

	// creating actual shader programs
	SHLChunkPtr TheSHLChunk = SHLChunk::create();
	beginEditCP(TheSHLChunk);
		TheSHLChunk->setVertexProgram(createGlassVertexProg());
		TheSHLChunk->setFragmentProgram(createGlassFragProg());
	endEditCP(TheSHLChunk);

	// for background reflections off of material
	ImagePtr CubeTextureFront = ImageFileHandler::the().read("Data/cell_front.jpg");
	ImagePtr CubeTextureBack = ImageFileHandler::the().read("Data/cell_back.jpg");
	ImagePtr CubeTextureLeft = ImageFileHandler::the().read("Data/cell_left.jpg");
	ImagePtr CubeTextureRight = ImageFileHandler::the().read("Data/cell_right.jpg");
	ImagePtr CubeTextureTop = ImageFileHandler::the().read("Data/cell_top.jpg");
	ImagePtr CubeTextureBottom = ImageFileHandler::the().read("Data/cell_bottom.jpg");
	CubeTextureChunkPtr CubeTexture = CubeTextureChunk::create();
	beginEditCP(CubeTexture);
		CubeTexture->setNegXImage(CubeTextureLeft);
		CubeTexture->setNegYImage(CubeTextureBottom);
		CubeTexture->setImage(CubeTextureFront); // negative Z
		CubeTexture->setPosXImage(CubeTextureRight);
		CubeTexture->setPosYImage(CubeTextureTop);
		CubeTexture->setPosZImage(CubeTextureBack);
	endEditCP(CubeTexture);
	// intensity of diffraction off of 'glass'
	ShaderParameterRealPtr RainbowParameter = ShaderParameterReal::create();
	beginEditCP(RainbowParameter);
		RainbowParameter->setName("rainbowiness");
		RainbowParameter->setValue(0.4);
	endEditCP(RainbowParameter);
	SHLParameterChunkPtr SHLParameters = SHLParameterChunk::create();
	beginEditCP(SHLParameters);
		SHLParameters->getParameters().push_back(RainbowParameter);
		SHLParameters->setSHLChunk(TheSHLChunk);
	endEditCP(SHLParameters);
	// assembling material
	ChunkMaterialPtr SimpleGlassMaterial = ChunkMaterial::create();
	beginEditCP(SimpleGlassMaterial, ChunkMaterial::ChunksFieldMask);
		SimpleGlassMaterial->addChunk(ShaderMaterialChunk);
		SimpleGlassMaterial->addChunk(SHLParameters);
		SimpleGlassMaterial->addChunk(TheSHLChunk);
		SimpleGlassMaterial->addChunk(ExampleBlendChunk);
		SimpleGlassMaterial->addChunk(CubeTexture);
		SimpleGlassMaterial->addChunk(GlassDepthChunk);
		SimpleGlassMaterial->addChunk(GlassShaderPolyChunk);
	endEditCP(SimpleGlassMaterial, ChunkMaterial::ChunksFieldMask);

	return SimpleGlassMaterial;

}

std::string createGlassVertexProg(void)
{
	std::ostringstream VertexProgStream;

	VertexProgStream
	<< "varying out vec3 vNormal;\n"
	<< "varying out vec3 vViewVec;\n"
	<< "void main(void)\n"
	<< "{\n"
	<< "    vec3 ecPos = vec3(gl_ModelViewMatrix * gl_Vertex);\n"
	<< "    vViewVec = normalize(-ecPos);\n"
	<< "	vec3 Pos = gl_Vertex.xyz;\n"
	<< "	gl_Position = gl_ModelViewProjectionMatrix * vec4(Pos,1.0);\n"
	<< "	vNormal = gl_NormalMatrix*gl_Normal;\n"
	<< "}\n";

	return VertexProgStream.str();
}

std::string createGlassFragProg(void)
{
	std::ostringstream FragProgStream;

	FragProgStream
	<< "uniform samplerCube Environment;\n"
	<< "uniform float rainbowiness;\n"
	<< "varying in vec3 vNormal;\n"
	<< "varying in vec3 vViewVec;\n"
	<< "vec3 HSVtoRGB(vec3 HSV)\n"
	<< "{\n"
	<< "   vec3 RGB;\n"
	<< "   float f,p,q,t,h = HSV.x/60.0; \n"
	<< "   int i = floor(h);\n"
	<< "   f = h-i;\n"    
	<< "   p = HSV.z*(1-HSV.y);\n"
	<< "   q = HSV.z*(1-HSV.y*f);\n"
	<< "  t = HSV.z*(1-HSV.y*(1-f));\n"
	<< "   switch(i) \n"
	<< "   {\n"
	<< "	  case 0:\n"
	<< "		 RGB = vec3(HSV.z,t,p);\n"
	<< "		 break;\n"
	<< "	  case 1:\n"
	<< "		 RGB = vec3(q,HSV.z,p);\n"
	<< "		 break;\n"
	<< "	  case 2:\n"
	<< "		 RGB = vec3(p,HSV.z,t);\n"
	<< "		 break;\n"
	<< "	  case 3:\n"
	<< "		 RGB = vec3(p,q,HSV.z);\n"
	<< "		 break;\n"
	<< "	  case 4:\n"
	<< "		 RGB = vec3(t,p,HSV.z);\n"
	<< "		 break;\n"
	<< "	  case 5:\n"
	<< "		 RGB = vec3(HSV.z,p,q);\n"
	<< "		 break;\n"
	<< "	  default: // default to case 5\n"
	<< "		 RGB = vec3(HSV.z,p,q);\n"
	<< "		 break;\n"
	<< "   }\n"
	<< "   return RGB;\n"
	<< "}\n"
	<< "void main(void)\n"
	<< "{\n"
	<< "   vec3 normal = normalize(vNormal);\n"
	<< "   vec3 view =  normalize(vViewVec);\n"
	<< "   float v =  dot(view, normal);\n"
	<< "   // get rainbow-ish color\n"
	<< "   vec3 rainbow = HSVtoRGB(vec3(v*360.0,1.0,1.0)); // convert v to degrees before sending to func\n"
	<< "   // Find the reflection\n"
	<< "   vec3 reflVec =  reflect(-vViewVec, normal);\n"
	<< "   vec3 refl = textureCube(Environment, reflVec).xyz;\n"
	<< "   // mix colors from rainbow and env\n"
	<< "   vec3 color = mix(refl, rainbow, rainbowiness * v);\n"
	<< "   gl_FragColor = vec4 (color, 1.0 - v); \n" 
	<< "}\n";

	return FragProgStream.str();

	//gl_FragColor = vec4 (color, 1.0 - v);
}

MaterialPtr createComplexGlassMaterial(void)
{	
	BlendChunkPtr ExampleBlendChunk = BlendChunk::create();
	beginEditCP(ExampleBlendChunk);
	    ExampleBlendChunk->setSrcFactor(GL_SRC_ALPHA);
	    ExampleBlendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);
	endEditCP(ExampleBlendChunk);

	//Depth Chunk, default parameters used 
	DepthChunkPtr GlassDepthChunk = DepthChunk::create();
	
	// culling back-facing polygons
	PolygonChunkPtr GlassShaderPolyChunk = PolygonChunk::create();
	beginEditCP(GlassShaderPolyChunk);
		GlassShaderPolyChunk->setCullFace(GL_BACK);
	beginEditCP(GlassShaderPolyChunk);

	//Material Chunk
	MaterialChunkPtr ShaderMaterialChunk = MaterialChunk::create();
	beginEditCP(ShaderMaterialChunk);
		ShaderMaterialChunk->setAmbient(Color4f(0.4f,0.4f,0.4f,1.0f));
		ShaderMaterialChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
		ShaderMaterialChunk->setSpecular(Color4f(1.0f,1.0f,1.0f,1.0f));
	endEditCP(ShaderMaterialChunk);

	// creating actual shader programs
	SHLChunkPtr TheSHLChunk = SHLChunk::create();
	beginEditCP(TheSHLChunk);
		TheSHLChunk->setVertexProgram(createComplexGlassVertexProg());
		TheSHLChunk->setFragmentProgram(createComplexGlassFragProg());
	endEditCP(TheSHLChunk);

	// for refractions/reflections off of material
	ImagePtr CubeTextureFront = ImageFileHandler::the().read("Data/cell_front.jpg");
	ImagePtr CubeTextureBack = ImageFileHandler::the().read("Data/cell_back.jpg");
	ImagePtr CubeTextureLeft = ImageFileHandler::the().read("Data/cell_left.jpg");
	ImagePtr CubeTextureRight = ImageFileHandler::the().read("Data/cell_right.jpg");
	ImagePtr CubeTextureTop = ImageFileHandler::the().read("Data/cell_top.jpg");
	ImagePtr CubeTextureBottom = ImageFileHandler::the().read("Data/cell_bottom.jpg");
	CubeTextureChunkPtr CubeTexture = CubeTextureChunk::create();
	beginEditCP(CubeTexture);
		CubeTexture->setNegXImage(CubeTextureLeft);
		CubeTexture->setNegYImage(CubeTextureBottom);
		CubeTexture->setImage(CubeTextureBack); // negative Z
		CubeTexture->setPosXImage(CubeTextureRight);
		CubeTexture->setPosYImage(CubeTextureTop);
		CubeTexture->setPosZImage(CubeTextureFront);
	endEditCP(CubeTexture);

	// parameters for diffraction off of 'glass'
	ShaderParameterRealPtr IdxOfRefractionRed = ShaderParameterReal::create();
	beginEditCP(IdxOfRefractionRed);
		IdxOfRefractionRed->setName("EtaR");
		IdxOfRefractionRed->setValue(0.65);
	endEditCP(IdxOfRefractionRed);

	ShaderParameterRealPtr IdxOfRefractionGreen = ShaderParameterReal::create();
	beginEditCP(IdxOfRefractionGreen);
		IdxOfRefractionGreen->setName("EtaG");
		IdxOfRefractionGreen->setValue(0.67);
	endEditCP(IdxOfRefractionGreen);

	ShaderParameterRealPtr IdxOfRefractionBlue = ShaderParameterReal::create();
	beginEditCP(IdxOfRefractionRed);
		IdxOfRefractionRed->setName("EtaB");
		IdxOfRefractionRed->setValue(0.69);
	endEditCP(IdxOfRefractionRed);

	ShaderParameterRealPtr FresnelPower = ShaderParameterReal::create();
	beginEditCP(FresnelPower);
		FresnelPower->setName("FresnelPower");
		FresnelPower->setValue(5.0);
	endEditCP(FresnelPower);

	ShaderParameterBoolPtr UseChromaticAbberation = ShaderParameterBool::create();
	beginEditCP(UseChromaticAbberation);
		UseChromaticAbberation->setName("ChromaticAbberation");
		UseChromaticAbberation->setValue(true);
	endEditCP(UseChromaticAbberation);

	SHLParameterChunkPtr SHLParameters = SHLParameterChunk::create();
	beginEditCP(SHLParameters);
		SHLParameters->getParameters().push_back(UseChromaticAbberation);
		SHLParameters->getParameters().push_back(IdxOfRefractionRed);
		SHLParameters->getParameters().push_back(IdxOfRefractionGreen);
		SHLParameters->getParameters().push_back(IdxOfRefractionBlue);
		SHLParameters->getParameters().push_back(FresnelPower);
		SHLParameters->setSHLChunk(TheSHLChunk);
	endEditCP(SHLParameters);

	// assembling material
	ChunkMaterialPtr ComplexGlassMaterial = ChunkMaterial::create();
	beginEditCP(ComplexGlassMaterial, ChunkMaterial::ChunksFieldMask);
		ComplexGlassMaterial->addChunk(ShaderMaterialChunk);
		ComplexGlassMaterial->addChunk(SHLParameters);
		ComplexGlassMaterial->addChunk(TheSHLChunk);
		ComplexGlassMaterial->addChunk(ExampleBlendChunk);
		ComplexGlassMaterial->addChunk(CubeTexture);
		ComplexGlassMaterial->addChunk(GlassDepthChunk);
		ComplexGlassMaterial->addChunk(GlassShaderPolyChunk);
	endEditCP(ComplexGlassMaterial, ChunkMaterial::ChunksFieldMask);

	return ComplexGlassMaterial;
	

}

std::string createComplexGlassVertexProg(void)
{
	std::ostringstream VertexProgStream;

	VertexProgStream
	<< "uniform bool ChromaticAbberation;\n"

	<< "uniform float EtaR;\n"
	<< "uniform float EtaG;\n"
	<< "uniform float EtaB;\n"

	<< "uniform float FresnelPower;\n"

	<< "varying out vec3 Reflect;\n"
	<< "varying out vec3 RefractR;\n"
	<< "varying out vec3 RefractG;\n"
	<< "varying out vec3 RefractB;\n"
	<< "varying out float Ratio;\n"
	<< "varying out vec3 i;\n"
	<< "varying out vec3 n;\n"

	<< "void main(void)\n"
	<< "{\n"
	<< "   vec4 ecPosition = gl_Vertex;\n"
	//<< "   vec4 ecPosition = gl_ModelViewMatrix * gl_Vertex;\n"
	<< "   vec3 ecPosition3 = ecPosition.xyz ;// ecPosition.w;\n"
	   
	<< "  i = normalize(ecPosition3);\n"
	<< "  n = normalize(gl_Normal);\n"
	//<< "  n = normalize(gl_NormalMatrix * gl_Normal);\n"
	   
	<< "   float F = ((1.0-EtaG) * (1.0-EtaG))/((1.0+EtaG) * (1.0+EtaG));\n"
	<< "   Ratio = F + (1.0 - F) * pow((1.0 - dot(-i,n)), FresnelPower);\n"
	   
	<< "   if(ChromaticAbberation)\n"
	<< "   {\n"
	<< "	  RefractR = refract(i,n,EtaR);\n"
	<< "	  RefractR = vec3(gl_TextureMatrix[0] * vec4(RefractR,1.0));\n"
	      
	<< "	  RefractG = refract(i,n,EtaG);\n"
	<< "	  RefractG = vec3(gl_TextureMatrix[0] * vec4(RefractG,1.0));\n"
	      
	<< "	  RefractB = refract(i,n,EtaB);\n"
	<< "	  RefractB = vec3(gl_TextureMatrix[0] * vec4(RefractB,1.0));\n"
	<< "   } \n"
	<< "   else\n"
	<< "  {\n"
	<< "	  RefractR = refract(i,n, ((EtaR + EtaB + EtaG)/3.0));\n"
	<< "	  RefractR = vec3(gl_TextureMatrix[0] * vec4(RefractR,1.0));\n"
	<< "   }\n"
	   
	<< "   Reflect = ( vec4(reflect(i,n),1.0)).xyz;\n"
	<< "  Reflect = vec3(gl_TextureMatrix[0] * vec4(Reflect,1.0));\n"
	   
	<< "   gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n"
	<< "}\n";

	return VertexProgStream.str();

}

std::string createComplexGlassFragProg(void)
{
	std::ostringstream FragProgStream;

	FragProgStream
	<< "uniform samplerCube Environment;\n"
	<< "uniform bool ChromaticAbberation;\n"

	<< "varying in vec3 Reflect;\n"
	<< "varying in vec3 RefractR;\n"
	<< "varying in vec3 RefractG;\n"
	<< "varying in vec3 RefractB;\n"
	<< "varying in float Ratio;\n"
	<< "varying in vec3 i;\n"
	<< "varying in vec3 n;\n"

	<< "void main(void)\n"
	<< "{\n"
	<< "   vec3 refractColor, reflectColor;\n"
	   
	<< "   if(ChromaticAbberation)\n"
	<< "   {\n"
	<< "	  refractColor.x = vec3(texture(Environment, RefractR)).x;\n"
	<< "	  refractColor.y = vec3(texture(Environment, RefractG)).y;\n"
	<< "	  refractColor.z = vec3(texture(Environment, RefractB)).z;\n"
	<< "   }\n"
	<< "   else\n"
	<< "   {\n"
	<< "	  refractColor = vec3(texture(Environment,RefractR));\n"
	<< "   }\n"
	   
	<< "   reflectColor = vec3(texture(Environment, Reflect));\n"
	   
	<< "   vec3 color = mix(refractColor, reflectColor, Ratio);\n"
	//<< "   vec3 ReflectT = vec3((Reflect + vec3(1.0))*0.5);\n"  
	<< "   gl_FragColor = vec4(color, 1.0);\n"
	  
	<< "}\n";

	return FragProgStream.str();
}

BackgroundPtr createBackground(void)
{
	ImagePtr CubeTextureFront = ImageFileHandler::the().read("Data/cell_front.jpg");
	ImagePtr CubeTextureBack = ImageFileHandler::the().read("Data/cell_back.jpg");
	ImagePtr CubeTextureLeft = ImageFileHandler::the().read("Data/cell_left.jpg");
	ImagePtr CubeTextureRight = ImageFileHandler::the().read("Data/cell_right.jpg");
	ImagePtr CubeTextureTop = ImageFileHandler::the().read("Data/cell_top.jpg");
	ImagePtr CubeTextureBottom = ImageFileHandler::the().read("Data/cell_bottom.jpg");

	TextureChunkPtr BGTop = TextureChunk::create();
	TextureChunkPtr BGBottom = TextureChunk::create();
	TextureChunkPtr BGLeft = TextureChunk::create();
	TextureChunkPtr BGRight = TextureChunk::create();
	TextureChunkPtr BGBack = TextureChunk::create();
	TextureChunkPtr BGFront = TextureChunk::create();

	beginEditCP(BGTop);
		BGTop->setImage(CubeTextureTop);

	endEditCP(BGTop);
	beginEditCP(BGBottom);
		BGBottom->setImage(CubeTextureBottom);
	endEditCP(BGBottom);
	beginEditCP(BGLeft);
		BGLeft->setImage(CubeTextureLeft);
	endEditCP(BGLeft);
	beginEditCP(BGRight);
		BGRight->setImage(CubeTextureRight);
	endEditCP(BGRight);
	beginEditCP(BGBack);
		BGBack->setImage(CubeTextureBack);
	endEditCP(BGBack);
	beginEditCP(BGFront);
		BGFront->setImage(CubeTextureFront);
	endEditCP(BGFront);

	SkyBackgroundPtr TheBackground = SkyBackground::create();
	beginEditCP(TheBackground);
		TheBackground->setBackTexture(BGFront);
		TheBackground->setFrontTexture(BGBack);
		TheBackground->setBottomTexture(BGBottom);
		TheBackground->setLeftTexture(BGLeft);
		TheBackground->setRightTexture(BGRight);
		TheBackground->setTopTexture(BGTop);
		TheBackground->setBoxInside(true);
	endEditCP(TheBackground);

	return TheBackground;
}

