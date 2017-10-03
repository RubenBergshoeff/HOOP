//
//  CBHerdMentality.cpp
//  ConwaysGameOfLife
//
//  Created by Ruben Bergshoeff on 10/3/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "CBHerdMentality.hpp"

CBHerdMentality::CBHerdMentality(){
    
}

bool CBHerdMentality::newState(int livingNeighbours, bool state) {
    
    if (state && (livingNeighbours >= 3 && livingNeighbours < 5)){
        return true;
    }
    
    if (livingNeighbours == 4)
    {
        return true;
    }
    
    return false;
}
