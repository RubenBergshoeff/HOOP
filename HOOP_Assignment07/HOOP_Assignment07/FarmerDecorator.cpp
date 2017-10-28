//
//  FarmerDecorator.cpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "FarmerDecorator.hpp"

FarmerDecorator::FarmerDecorator (NPCBase* npc) : Decorator (npc) {
    
}

void FarmerDecorator::render(){
    Decorator::render();
    cout << "Farmer" << endl;
}
