//
//  testTile.cpp
//  LightsOut
//
//  Created by Benjamin Wilcox on 2/10/16.
//  Copyright © 2016 Benjamin Wilcox. All rights reserved.
//

#include "catch.hpp"
#include "Tile.hpp"

TEST_CASE("Testing Tile class") {
    
    Tile* t = new Tile();
    
    SECTION("Test that we can get the Tile's state") {
        bool tstate = t->getState();
        REQUIRE(tstate == false);
    }
    
    SECTION("Test turn Tile on") {
        t->on();
        bool tstate = t->getState();
        REQUIRE(tstate == true);
    }
    
    SECTION("Test turn Tile off") {
        t->off();
        bool tstate = t->getState();
        REQUIRE(tstate == false);
    }
    
    delete t;
}