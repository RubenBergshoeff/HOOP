//
//  NPCBase.hpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef NPCBase_hpp
#define NPCBase_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class NPCBase {
public:
    virtual void render () = 0;
};

#endif /* NPCBase_hpp */
