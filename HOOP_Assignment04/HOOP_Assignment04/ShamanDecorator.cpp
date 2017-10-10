//
//  ShamanDecorator.cpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "ShamanDecorator.hpp"

ShamanDecorator::ShamanDecorator (NPCBase* npc) : Decorator (npc) {
    
}

void ShamanDecorator::render(){
    Decorator::render();
    cout << "Shaman" << endl;
}
