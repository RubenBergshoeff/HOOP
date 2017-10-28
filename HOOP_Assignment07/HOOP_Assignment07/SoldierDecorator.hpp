//
//  SoldierDecorator.hpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef SoldierDecorator_hpp
#define SoldierDecorator_hpp

#include <stdio.h>
#include "Decorator.hpp"

class SoldierDecorator : public Decorator {
public:
    SoldierDecorator (NPCBase * npc);
    void render () override;
private:
    NPCBase * npc;
};

#endif /* SoldierDecorator_hpp */
