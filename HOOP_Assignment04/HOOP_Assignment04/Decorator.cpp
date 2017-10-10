//
//  Decorator.cpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "Decorator.hpp"

Decorator::Decorator(NPCBase* npc) : npc (npc) {
}

void Decorator::render(){
    npc->render();
}

