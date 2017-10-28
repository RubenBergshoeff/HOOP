//
//  ElfNPC.hpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef ElfNPC_hpp
#define ElfNPC_hpp
#include "NPCBase.hpp"

#include <stdio.h>
#include <string>

class ElfNPC : public NPCBase {
public:
    ElfNPC(string name);
    void render () override;
private:
    string name;
};

#endif /* ElfNPC_hpp */
