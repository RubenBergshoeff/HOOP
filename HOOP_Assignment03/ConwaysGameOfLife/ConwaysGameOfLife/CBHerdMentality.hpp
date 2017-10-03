//
//  CBHerdMentality.hpp
//  ConwaysGameOfLife
//
//  Created by Ruben Bergshoeff on 10/3/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef CBHerdMentality_hpp
#define CBHerdMentality_hpp

#include <stdio.h>
#include "CellBehaviour.hpp"

class CBHerdMentality : public CellBehaviour {
public:
    CBHerdMentality();
    virtual bool newState(int livingNeighbours, bool state);
};

#endif /* CBHerdMentality_hpp */
