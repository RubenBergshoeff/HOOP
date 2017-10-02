//
//  CBStandard.cpp
//  ConwaysGameOfLife
//
//  Created by Ruben Bergshoeff on 10/1/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "CBStandard.hpp"

CBStandard::CBStandard(){
    
}

bool CBStandard::newState(int livingNeighbours, bool state) {
    
    if (state && (livingNeighbours == 2 || livingNeighbours == 3)){
        return true;
    }
    
    if (livingNeighbours == 3)
    {
        return true;
    }
    
    return false;
}
