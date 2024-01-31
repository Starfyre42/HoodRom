#include <genesis.h>
#include <resources.h>

uint16_t ind = TILE_USER_INDEX;

Sprite* cola;

int main() {
    SPR_init();
    PAL_setPalette(PAL2, sprite.palette->data, DMA);
    cola = SPR_addSprite(&sprite,120,10, TILE_ATTR(PAL2,FALSE,FALSE,FALSE));
    SPR_setAnim(cola, 0);
    
    PAL_setPalette(PAL0, background.palette->data, DMA);
    VDP_drawImageEx(BG_B, &background, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, ind), 0, 0, FALSE, TRUE);
    ind += background.tileset->numTile;
    PAL_setPalette(PAL1, foreground.palette->data, DMA);
    VDP_drawImageEx(BG_A, &foreground, TILE_ATTR_FULL(PAL1, FALSE, FALSE, FALSE, ind), 0, 0, FALSE, TRUE);
    ind += foreground.tileset->numTile;

    //SND_startPlay_PCM(audio, sizeof(audio), SOUND_RATE_32000, SOUND_PAN_CENTER, 100);
    SND_startPlay_4PCM(audio, sizeof(audio), SOUND_PCM_CH1, 100);
    // XGM_setPCM(1, audio, sizeof(audio));
    // XGM_startPlayPCM(1, 0, SOUND_PCM_CH1);
    
    //VDP_loadTileSet(cog.tileset, 1, DMA);
    //VDP_setTileMapEx(BG_A, cog.tilemap, TILE_ATTR_FULL(1, 0, 0, 0, 1), 0, 0, 0, 0, 40, 28, DMA_QUEUE);

    //VDP_setTextPlane(BG_B);
    //VDP_drawText("Hello Mega Drive World!", 8, 12);

    while (1) {
        //sprite update
        SPR_update();
        // Do V-Blank
        SYS_doVBlankProcess();

    }

    return 0;
}
