//
//  OrkNPC.cpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "OrkNPC.hpp"

OrkNPC::OrkNPC(string name){
    this->name = name;
}

void OrkNPC::render(){
    cout << "Ork: " << name << endl;
}
