// Copyright (c) 2020 Mr. Coxall All rights reserved
//
// Created by: Mr. Coxall
// Created on: Sept 2020
// This program is the Space Aliens game for the GameBoy

#include <gb/gb.h>
#include <stdio.h>

#include "MetaSprites.c"
#include "SpaceAliens.c"

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

    SHOW_SPRITES;
    DISPLAY_ON;
}
