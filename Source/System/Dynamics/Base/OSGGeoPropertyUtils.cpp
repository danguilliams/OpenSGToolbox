#include "OSGGeoPropertyUtils.h"

OSG_BEGIN_NAMESPACE

void zeroGeoProperty(GeoVectorProperty* GeoProp)
{
    switch(GeoProp->getFormat())
    {
        case GL_UNSIGNED_BYTE:
            zeroGeoPropertyTmpl<GLubyte>(GeoProp);
            break;
        case GL_BYTE:
            zeroGeoPropertyTmpl<GLbyte>(GeoProp);
            break;
        case GL_UNSIGNED_SHORT:
            zeroGeoPropertyTmpl<GLushort>(GeoProp);
            break;
        case GL_SHORT:
            zeroGeoPropertyTmpl<GLshort>(GeoProp);
            break;
#ifndef OSG_EMBEDED
        case GL_FLOAT:
            zeroGeoPropertyTmpl<GLfloat>(GeoProp);
            break;
#endif
#ifdef OSG_EMBEDED
        case GL_FIXED:
            zeroGeoPropertyTmpl<GLfixed>(GeoProp);
            break;
#endif
#ifndef OSG_EMBEDED
        case GL_DOUBLE:
            zeroGeoPropertyTmpl<GLdouble>(GeoProp);
            break;
#endif
        default:
            SWARNING << "Property format " << GeoProp->getFormat() << " not supported" << std::endl;
            break;
    }
}

void morphGeoProperty(GeoVectorProperty* BaseGeoProp,
                      GeoVectorProperty* TargetGeoProp,
                      GeoVectorProperty* ResultGeoProp,
                      Real32 Weight)
{
    switch(ResultGeoProp->getFormat())
    {
        case GL_UNSIGNED_BYTE:
            morphGeoPropertyTmpl<GLubyte>(BaseGeoProp,
                                   TargetGeoProp,
                                   ResultGeoProp,
                                   Weight);
            break;
        case GL_BYTE:
            morphGeoPropertyTmpl<GLbyte>(BaseGeoProp,
                                   TargetGeoProp,
                                   ResultGeoProp,
                                   Weight);
            break;
        case GL_UNSIGNED_SHORT:
            morphGeoPropertyTmpl<GLushort>(BaseGeoProp,
                                   TargetGeoProp,
                                   ResultGeoProp,
                                   Weight);
            break;
        case GL_SHORT:
            morphGeoPropertyTmpl<GLshort>(BaseGeoProp,
                                   TargetGeoProp,
                                   ResultGeoProp,
                                   Weight);
            break;
#ifndef OSG_EMBEDED
        case GL_FLOAT:
            morphGeoPropertyTmpl<GLfloat>(BaseGeoProp,
                                   TargetGeoProp,
                                   ResultGeoProp,
                                   Weight);
            break;
#endif
#ifdef OSG_EMBEDED
        case GL_FIXED:
            morphGeoPropertyTmpl<GLfixed>(BaseGeoProp,
                                   TargetGeoProp,
                                   ResultGeoProp,
                                   Weight);
            break;
#endif
#ifndef OSG_EMBEDED
        case GL_DOUBLE:
            morphGeoPropertyTmpl<GLdouble>(BaseGeoProp,
                                   TargetGeoProp,
                                   ResultGeoProp,
                                   Weight);
            break;
#endif
        default:
            SWARNING << "Property format " << ResultGeoProp->getFormat() << " not supported" << std::endl;
            break;
    }
}

OSG_END_NAMESPACE


