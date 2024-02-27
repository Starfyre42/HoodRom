#ifndef SCENE_MAIN_H
#define SCENE_MAIN_H

#include <genesis.h>
#include <resources.h>
#include "scene.h"

void scene_main_setup();
void scene_main_loop();
void scene_main_teardown();

extern struct Scene scene_main;
#endif