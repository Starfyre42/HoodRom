#ifndef SCENE_H
#define SCENE_H

#include <genesis.h>
#include <resources.h>

struct Scene{
    void (*setup)();
    void (*loop)();
    void (*teardown)();
};

#endif