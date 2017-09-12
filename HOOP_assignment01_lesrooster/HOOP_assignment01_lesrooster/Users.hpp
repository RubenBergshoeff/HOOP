//
//  Users.hpp
//  HOOP_assignment01_lesrooster
//
//  Created by Ruben Bergshoeff on 12/09/2017.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Users_hpp
#define Users_hpp

#include <stdio.h>
#include <string>
#include "TimeTable.hpp"

class User {
public:
    std::string name;
    TimeTable timetable;
    virtual void loadTimeTable();
};

class Student : public User {
public:
    StudentClasses studentClass;
    void loadTimeTable ();
};

class Teacher : public User {
public:
    void loadTimeTable();
};

#endif /* Users_hpp */
