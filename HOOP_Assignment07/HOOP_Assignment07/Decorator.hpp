//
//  Decorator.hpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Decorator_hpp
#define Decorator_hpp
#include "NPCBase.hpp"

#include <stdio.h>

class Decorator : public NPCBase {
public:
    Decorator (NPCBase * npc);
    void render () override;
private:
    NPCBase * npc;
};

#endif /* Decorator_hpp */
