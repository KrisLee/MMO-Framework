#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

#include "TutorialApplication.h"
#include "BL_Debug.h"
#include "FileOperation.h"
#include "ShareMisc.h"

#ifdef __cplusplus
extern "C" {
#endif

#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
  INT WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR strCmdLine, INT){
	char** argv = __argv;
#else
	int main(int argc, char *argv[]){
#endif
    SetCurrentPath(argv[0]);
    // Create application object
    TutorialApplication app;

    try 
    {
      app.go();
    } 
    catch(Ogre::Exception& e)  
    {
#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
      MessageBox(NULL, e.getFullDescription().c_str(), "An exception has occurred!", MB_OK | MB_ICONERROR | MB_TASKMODAL);
#else
      std::cerr << "An exception has occurred: " <<
        e.getFullDescription().c_str() << std::endl;
#endif
    }
    return 0;
  }
#ifdef __cplusplus
}
#endif
