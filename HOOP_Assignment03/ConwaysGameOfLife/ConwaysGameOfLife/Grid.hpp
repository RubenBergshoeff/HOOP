//
//  Grid.hpp
//  ConwaysGameOfLife
//
//  Created by Ruben Bergshoeff on 10/1/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Grid_hpp
#define Grid_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include "Cell.hpp"

using namespace std;

class Grid {
public:
    Grid (int size);
    int getLivingNeighbours (int x, int y);
    void updateState ();
    void draw ();
    vector< vector<Cell> > cells;
private:
};

#endif /* Grid_hpp */
