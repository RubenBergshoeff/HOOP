//
//  OrkNPC.hpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef OrkNPC_hpp
#define OrkNPC_hpp
#include "NPCBase.hpp"

#include <stdio.h>
#include <string>

class OrkNPC : public NPCBase {
public:
    OrkNPC(string name);
    void render () override;
private:
    string name;
};

#endif /* OrkNPC_hpp */
