#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGlutWindow.h"

#ifdef _WIN64
//   define something for Windows (64-bit)
#elif _WIN32
bool macOn = false;
//    define something for Windows (32-bit)

#elif __APPLE__
//    #include "TargetConditionals.h"
#if TARGET_OS_IPHONE && TARGET_IPHONE_SIMULATOR
// define something for simulator
#elif TARGET_OS_IPHONE
// define something for iphone
#else

#define TARGET_OS_OSX 1
bool macOn = true;
// define something for OSX
#endif

#elif __linux
// linux
#elif __unix // all unices not caught above
// Unix

#elif __posix
// POSIX
#endif

int main( )
{
    
    ofAppGlutWindow window;
    
    if (macOn==true)
    {
        window.setGlutDisplayString("rgba double samples>=4");
    }
    ofSetupOpenGL(&window, 1280,720, OF_WINDOW);			// <-------- setup the GL context
    
    // this kicks off the running of my app
    // can be OF_WINDOW or OF_FULLSCREEN
    // pass in width and height too:
    ofRunApp( new ofApp());
    
}
