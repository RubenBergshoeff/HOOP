//
//  SoldierDecorator.cpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "SoldierDecorator.hpp"

SoldierDecorator::SoldierDecorator (NPCBase* npc) : Decorator (npc) {
    
}

void SoldierDecorator::render(){
    Decorator::render();
    cout << "Soldier" << endl;
}
