#ifndef SCENE_MANAGER_H
#define SCENE_MANAGER_H

#include <genesis.h>
#include <resources.h>
#include "scene.h"

extern struct Scene* sm_curScene;

void sm_changeScene(struct Scene* newScene);
void sm_loop();

#endif