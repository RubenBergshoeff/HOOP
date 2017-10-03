//
//  CBLoners.hpp
//  ConwaysGameOfLife
//
//  Created by Ruben Bergshoeff on 10/3/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef CBLoners_hpp
#define CBLoners_hpp

#include <stdio.h>
#include "CellBehaviour.hpp"

class CBLoners : public CellBehaviour {
public:
    CBLoners();
    virtual bool newState(int livingNeighbours, bool state);
};

#endif /* CBLoners_hpp */
