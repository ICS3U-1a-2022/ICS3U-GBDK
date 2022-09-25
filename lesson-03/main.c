// Copyright (c) 2020 Mr. Coxall All rights reserved
//
// Created by: Mr. Coxall
// Created on: Sept 2020
// This program is the Space Aliens game for the GameBoy

#include <gb/gb.h>
#include <stdio.h>

#include "MetaSprites.c"
#include "SpaceAliens.c"
#include "Background.c"

void main() {
    // load spritesheet reference
    set_sprite_data(0, 16, SpaceAliens);

    // load sprite
    set_sprite_tile(0, 1);
    set_sprite_tile(1, 2);
    set_sprite_tile(2, 3);
    set_sprite_tile(3, 4);
    UBYTE spriteTiles[4] = {0, 1, 2, 3};

    // create a meta sprite
    struct MetaSprite ship;
    setupMetaSprite(&ship, 72, 120, spriteTiles);
    updateMetaSprite(&ship);

    // set background tile sheet 0 to the same tile sheet
    set_bkg_data(0, 16, SpaceAliens);
    // load tiles from (0, 0) to (20, 36) from the tile sheet called Background
    set_bkg_tiles(0, 0, 20, 36, Background);

    SHOW_BKG; // turn Background on
    SHOW_SPRITES;
    DISPLAY_ON;

    // game loop
    while (1) {
        // scroll background 0 in the X and -1 in the Y
        scroll_bkg(0, -1);

        // wait until end of frame (1/60th second)
        wait_vbl_done();
    }
}
