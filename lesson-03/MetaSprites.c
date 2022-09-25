// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This is a game Meta Sprite struct and helper functions

#include <stdio.h>
#include <gb/gb.h>

struct MetaSprite {

    UBYTE spriteIDs[4];
    UINT8 xPosition;
    UINT8 yPosition;
};

void setupMetaSprite(struct MetaSprite* character, UINT8 x, UINT8 y, UBYTE spriteTiles[]){
    character->xPosition = x;
    character->yPosition = y;

    character->spriteIDs[0] = spriteTiles[0];
    character->spriteIDs[1] = spriteTiles[1];
    character->spriteIDs[2] = spriteTiles[2];
    character->spriteIDs[3] = spriteTiles[3];
}

void updateMetaSprite(struct MetaSprite* character){
    UBYTE spriteSize = 8;

    move_sprite(character->spriteIDs[0], character->xPosition, character->yPosition);
    move_sprite(character->spriteIDs[1], character->xPosition + spriteSize, character->yPosition);
    move_sprite(character->spriteIDs[2], character->xPosition, character->yPosition + spriteSize);
    move_sprite(character->spriteIDs[3], character->xPosition + spriteSize, character->yPosition + spriteSize);
}
