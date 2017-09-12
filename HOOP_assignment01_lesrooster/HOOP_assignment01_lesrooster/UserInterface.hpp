//
//  UserInterface.hpp
//  HOOP_assignment01_lesrooster
//
//  Created by Ruben Bergshoeff on 12/09/2017.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef UserInterface_hpp
#define UserInterface_hpp

#include <iostream>
#include <stdio.h>
#include <string>
#include "Users.hpp"
#include "DataBase.hpp"

int main (int argc, const char * argv[]);

class UserInterface {
public:
    User currentUser;
    int displayInterface ();
    void userLogin (std::string name);
    void userLogout();
};

#endif /* UserInterface_hpp */
