//
//  ElfNPC.cpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "ElfNPC.hpp"

ElfNPC::ElfNPC(string name){
    this->name = name;
}

void ElfNPC::render(){
    cout << "Elf: " << name << endl;
}
