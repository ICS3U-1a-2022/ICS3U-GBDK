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
    // load spritesheet referenced as #0
    // load 16 sprites from it
    // from variable SpaceAliens
    set_sprite_data(0, 16, SpaceAliens);

    // load sprites for meta sprite
    set_meta_sprite_tile(0, 1, 2, 3, 4);

    // move meta sprite on screen
    move_meta_sprite(0, 76, 120);

    SHOW_SPRITES;
    DISPLAY_ON;
}
