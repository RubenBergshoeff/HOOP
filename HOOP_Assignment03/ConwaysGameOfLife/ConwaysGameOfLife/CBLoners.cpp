//
//  CBLoners.cpp
//  ConwaysGameOfLife
//
//  Created by Ruben Bergshoeff on 10/3/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "CBLoners.hpp"

CBLoners::CBLoners(){
    
}

bool CBLoners::newState(int livingNeighbours, bool state) {
    
    if (state && (livingNeighbours == 1 || livingNeighbours == 2)){
        return true;
    }
    
    if (state == false && livingNeighbours == 3)
    {
        return true;
    }
    
    return false;
}
