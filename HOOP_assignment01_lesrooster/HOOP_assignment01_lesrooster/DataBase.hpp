//
//  DataBase.hpp
//  HOOP_assignment01_lesrooster
//
//  Created by Ruben Bergshoeff on 12/09/2017.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef DataBase_hpp
#define DataBase_hpp

#include <stdio.h>
#include <string>
#include "Users.hpp"
#include "TimeTable.hpp"

class DataBase {
private:
    User * users;
    AgendaItem * agendaItems;
public:
    User * loadUser(std::string name);
};

#endif /* DataBase_hpp */
