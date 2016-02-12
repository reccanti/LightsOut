//
//  testGameLogic.cpp
//  LightsOut
//
//  Created by Benjamin Wilcox on 2/8/16.
//  Copyright © 2016 Benjamin Wilcox. All rights reserved.
//

#include "catch.hpp"
#include <string>
#include "GameLogic.hpp"

TEST_CASE("Testing GameLogic class") {
    
    
    GameLogic* gl = new GameLogic(2, 2);
    
    
    SECTION("Initial Test") {
        std::string response = gl->test();
        CAPTURE(response);
        REQUIRE(response.compare("My name is GameLogic") == 0);
    }
    
    
    SECTION("Test that we can get the tile at the current position") {
        REQUIRE(gl->currentTile() == NULL);
    }
    
    
    SECTION("Test that we can assign a tile to a position") {
        gl->assign(new Tile(), 0, 0);
        INFO(typeid(gl->currentTile()).name());
        REQUIRE(typeid(gl->currentTile()) == typeid(Tile*));
        
        REQUIRE(gl->currentTile()->getState() == false);
        gl->currentTile()->on();
        REQUIRE(gl->currentTile()->getState() == true);
        gl->currentTile()->off();
        REQUIRE(gl->currentTile()->getState() == false);
    }
    
    
    delete gl;
}
