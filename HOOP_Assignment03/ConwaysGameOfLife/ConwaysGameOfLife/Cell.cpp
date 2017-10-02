//
//  Cell.cpp
//  ConwaysGameOfLife
//
//  Created by Ruben Bergshoeff on 10/1/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "Cell.hpp"

Cell::Cell(bool state, CellBehaviour * behaviour){
    this->alive = state;
    this->behaviour = behaviour;
}
