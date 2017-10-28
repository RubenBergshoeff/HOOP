//
//  main.cpp
//  HOOP_Assignment07
//
//  Created by Ruben Bergshoeff on 10/28/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include <iostream>
#include <vector>
#include "NPCBase.hpp"



void render(std::vector<NPCBase *> npcs){
    for (auto& npc:npcs){
        npc->render();
        std::cout << "---" << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    std::vector<NPCBase *> npcs;
    
    npcs.push_back(NPCBase::CreateEnemy("Tom", ORK, FARMER));
    npcs.push_back(NPCBase::CreateEnemy("Legolas", ELF, SOLDIER));
    npcs.push_back(NPCBase::CreateEnemy("Arwen", ELF, SHAMAN));
    
    render(npcs);
    
    return 0;
}
