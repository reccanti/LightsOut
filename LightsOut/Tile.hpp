//
//  Tile.hpp
//  LightsOut
//
//  Created by Benjamin Wilcox on 2/10/16.
//  Copyright © 2016 Benjamin Wilcox. All rights reserved.
//

#ifndef Tile_hpp
#define Tile_hpp

class Tile {
public:
    Tile();
    ~Tile();
    void on();
    void off();
    bool getState();
};

#endif /* Tile_hpp */
