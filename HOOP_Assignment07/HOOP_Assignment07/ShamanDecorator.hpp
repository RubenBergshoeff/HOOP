//
//  ShamanDecorator.hpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef ShamanDecorator_hpp
#define ShamanDecorator_hpp

#include <stdio.h>
#include "Decorator.hpp"

class ShamanDecorator : public Decorator {
public:
    ShamanDecorator (NPCBase * npc);
    void render () override;
private:
    NPCBase * npc;
};

#endif /* ShamanDecorator_hpp */
