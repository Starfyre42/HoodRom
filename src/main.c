#include <genesis.h>
#include <resources.h>
#include "scene-manager.h"
#include "scene-main.h"

int main() {
  
    sm_changeScene(&scene_main);

    while (1) {
        sm_loop();
        
        // Do V-Blank
        SYS_doVBlankProcess();

    }

    return 0;
}
