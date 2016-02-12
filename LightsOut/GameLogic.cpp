//
//  GameLogic.cpp
//  LightsOut
//
//  Created by Benjamin Wilcox on 2/8/16.
//  Copyright © 2016 Benjamin Wilcox. All rights reserved.
//

#include "GameLogic.hpp"
#include <string>


/**
 * Constructor. Initializes a GameLogic object with the
 * specified number of rows and columns
 */
GameLogic::GameLogic(int r, int c) {
    rows = r;
    cols = c;
    curPosition = 0;
    int size = rows * cols;
    tiles = std::vector<Tile*>(size);
    for (int i = 0; i < size; i++) {
        tiles.push_back(nullptr);
    }
}


/**
 * Destructor for GameLogic. Clears all of the Tiles in the 
 * tile vector
 */
GameLogic::~GameLogic(){
    tiles.clear();
}


std::string GameLogic::test() {
    return "My name is GameLogic";
}


/**
 * An internal helper function to convert an (x, y) coordinate
 * into an array index value
 */
int GameLogic::getPointIndex(int x, int y) {
    int index = x * (rows - 1) + y;
    return index;
}


/**
 * Return the tile at the current position
 */
Tile* GameLogic::currentTile() {
    return tiles[curPosition];
}


/**
 * Given a tile, assign it to the tiles vector at the given
 * coordinates
 */
void GameLogic::assign(Tile* t, int x, int y) {
    int index = getPointIndex(x, y);
    tiles[index] = t;
}