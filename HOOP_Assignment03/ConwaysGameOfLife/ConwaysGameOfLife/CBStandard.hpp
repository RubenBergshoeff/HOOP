//
//  CBStandard.hpp
//  ConwaysGameOfLife
//
//  Created by Ruben Bergshoeff on 10/1/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef CBStandard_hpp
#define CBStandard_hpp

#include <stdio.h>
#include "CellBehaviour.hpp"

class CBStandard : public CellBehaviour {
public:
    CBStandard();
    virtual bool newState(int livingNeighbours, bool state);
};

#endif /* CBStandard_hpp */
