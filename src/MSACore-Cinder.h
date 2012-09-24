#pragma once

#define MSA	cinder // so cinder namespaces are also accessible within MSA


#include "cinder/Cinder.h"
#include "cinder/gl/gl.h"
#include "cinder/Rand.h"
#include "cinder/Vector.h"
#include "cinder/Color.h"
#include "cinder/app/AppBasic.h"

#include <string>
#include <vector>
#include <map>

using namespace std;

namespace MSA {
	
#define MSA_HOST_SUFFIX		"-Cinder"
	
	//todo:
#if defined (CINDER_MAC)
#define MSA_TARGET_OSX
	
#elif defined (CINDER_LINUX)
#define MSA_TARGET_LINUX
	
#elif defined (CINDER_MSW)
#define MSA_TARGET_WIN32
	
#elif defined (CINDER_COCOA_TOUCH)
#define MSA_TARGET_IPHONE
#endif
	
#if defined (CINDER_GLES)
#define MSA_TARGET_OPENGLES
#endif
	
	inline string dataPath(string path, bool absolute = false)		{	return "todo";	}
	
	inline double getElapsedSeconds()								{	return ci::app::getElapsedSeconds(); }
	inline long int getElapsedFrames()								{	return ci::app::getElapsedFrames(); }
	
	inline int getWindowWidth()										{	return ci::app::getWindowWidth(); }
	inline int getWindowHeight()									{	return ci::app::getWindowHeight(); }
	inline float getWindowAspectRatio()								{	return ci::app::getWindowAspectRatio(); }
	inline Vec2f getWindowSize()									{	return ci::app::getWindowSize(); }
	inline Vec2f getWindowCenter()									{	return ci::app::getWindowCenter(); }
	
	inline void drawString(string s, float x, float y)				{	return;  /* todo */ }	
}