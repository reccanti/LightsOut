//
//  GameLogic.hpp
//  LightsOut
//
//  Created by Benjamin Wilcox on 2/8/16.
//  Copyright © 2016 Benjamin Wilcox. All rights reserved.
//

#ifndef GameLogic_hpp
#define GameLogic_hpp

#include <string>
#include <vector>
#include "Tile.hpp"

class GameLogic {
public:
    GameLogic(int r, int c);
    ~GameLogic();
    std::string test();
    int getRows();
    int getCols();
    void assign(Tile*, int x, int y);
    Tile* currentTile();
private:
    int curPosition;
    int rows;
    int cols;
    int getPointIndex(int x, int y);
    std::vector<Tile*> tiles;
};

#endif /* GameLogic_hpp */
