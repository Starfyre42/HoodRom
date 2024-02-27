#include "sprites.h"
#include "controls.h"

void sprites(){
    SPR_init();
    PAL_setPalette(PAL2, sprite.palette->data, DMA);
    cola = SPR_addSprite(&sprite,player_x,player_y, TILE_ATTR(PAL2,FALSE,FALSE,FALSE));
    SPR_setAnim(cola, 0);
}