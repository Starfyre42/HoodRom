#include "scene-manager.h"

struct Scene* sm_curScene = 0;

void sm_changeScene(struct Scene* newScene){
    if (sm_curScene != 0) 
        sm_curScene->teardown();
    
    sm_curScene = newScene;
    sm_curScene->setup();

}

void sm_loop(){
    if(sm_curScene != 0)
        sm_curScene->loop();
}