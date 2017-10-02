//
//  CellBehaviour.hpp
//  ConwaysGameOfLife
//
//  Created by Ruben Bergshoeff on 10/1/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef CellBehaviour_hpp
#define CellBehaviour_hpp

#include <stdio.h>

class CellBehaviour {
public:
    virtual bool newState(int livingNeighbours, bool state) = 0;
};

#endif /* CellBehaviour_hpp */
