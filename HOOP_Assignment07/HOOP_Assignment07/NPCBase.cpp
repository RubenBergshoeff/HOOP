//
//  NPCBase.cpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "NPCBase.hpp"
#include "ElfNPC.hpp"
#include "OrkNPC.hpp"
#include "FarmerDecorator.hpp"
#include "SoldierDecorator.hpp"
#include "ShamanDecorator.hpp"


NPCBase * NPCBase::CreateEnemy (std::string name, NPCRACE npcRace, NPCCLASS npcClass) {
    NPCBase * newNPC;
    switch (npcRace) {
        case ELF:
            newNPC = new ElfNPC(name);
            break;
        case ORK:
            newNPC = new OrkNPC(name);
            break;
    }
    switch (npcClass) {
        case FARMER:
            newNPC = new FarmerDecorator(newNPC);
            break;
        case SHAMAN:
            newNPC = new ShamanDecorator(newNPC);
            break;
        case SOLDIER:
            newNPC = new SoldierDecorator(newNPC);
            break;
    }
    return newNPC;
}
