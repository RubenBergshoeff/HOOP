//
//  Cell.hpp
//  ConwaysGameOfLife
//
//  Created by Ruben Bergshoeff on 10/1/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Cell_hpp
#define Cell_hpp

#include <stdio.h>
#include "Vector2.hpp"
#include "CellBehaviour.hpp"

class Cell {
public:
    Cell(bool state, CellBehaviour * behaviour);
    bool alive;
    bool nextState;
    CellBehaviour * behaviour;
};

#endif /* Cell_hpp */
