#include "scene-main.h"
#include "controls.h"
#include "sprites.h"
#include "layers.h"

void scene_main_setup(){
     sprites();
     layers();
     SND_startPlay_4PCM(audio, sizeof(audio), SOUND_PCM_CH1, 100);
}
void scene_main_loop(){
    //game controls
        handleInput();
        //sprite update
        SPR_update();
}
void scene_main_teardown(){

}

struct Scene scene_main= {
    scene_main_setup,
    scene_main_loop,
    scene_main_teardown
};
