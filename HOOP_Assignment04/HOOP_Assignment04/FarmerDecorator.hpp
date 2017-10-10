//
//  FarmerDecorator.hpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef FarmerDecorator_hpp
#define FarmerDecorator_hpp

#include <stdio.h>
#include "Decorator.hpp"

class FarmerDecorator : public Decorator {
public:
    FarmerDecorator (NPCBase * npc);
    void render () override;
private:
    NPCBase * npc;
};

#endif /* FarmerDecorator_hpp */
