//
//  Tile.cpp
//  LightsOut
//
//  Created by Benjamin Wilcox on 2/10/16.
//  Copyright © 2016 Benjamin Wilcox. All rights reserved.
//

#include "Tile.hpp"

#include <iostream>

bool state;


/**
 * Constructs the Tile. Sets the Tile's state to On.
 */
Tile::Tile() {
    state = false;
}


Tile::~Tile() {}


/**
 * Sets the Tile's state to On.
 */
void Tile::on() {
    state = true;
    std::cout << "I'm On!\n";
}


/**
 * Sets the Tile's state to Off.
 */
void Tile::off() {
    state = false;
    std::cout <<"I'm Off!\n";
}


/**
 * Get the current state of the Tile.
 */
bool Tile::getState() {
    return state;
}