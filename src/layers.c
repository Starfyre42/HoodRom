#include "layers.h"

uint16_t ind = TILE_USER_INDEX;

void layers(){
    PAL_setPalette(PAL0, background.palette->data, DMA);
    VDP_drawImageEx(BG_B, &background, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, ind), 0, 0, FALSE, TRUE);
    ind += background.tileset->numTile;
    PAL_setPalette(PAL1, foreground.palette->data, DMA);
    VDP_drawImageEx(BG_A, &foreground, TILE_ATTR_FULL(PAL1, FALSE, FALSE, FALSE, ind), 0, 0, FALSE, TRUE);
    ind += foreground.tileset->numTile;
}