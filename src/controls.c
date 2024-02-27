#include "controls.h"

Sprite* cola;
int player_x = 100;
int player_y = 50;

void handleInput(){
    u16 value = JOY_readJoypad(JOY_1);
    if (value & BUTTON_RIGHT) {
    player_x += 1;
    }
     else if (value & BUTTON_LEFT){
    player_x -= 1;
    }
    if (value & BUTTON_UP)
    {player_y -= 1;}
    else if (value & BUTTON_DOWN) {
        player_y += 1;
    }
    SPR_setPosition(cola, player_x , player_y);
}