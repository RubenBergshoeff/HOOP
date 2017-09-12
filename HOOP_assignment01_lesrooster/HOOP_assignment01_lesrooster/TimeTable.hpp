//
//  TimeTable.hpp
//  HOOP_assignment01_lesrooster
//
//  Created by Ruben Bergshoeff on 12/09/2017.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef TimeTable_hpp
#define TimeTable_hpp

#include <stdio.h>
#include <string>

enum StudentClasses {
};

enum Locations {
};

struct DateTime {
    char hour;
    char minute;
    int length;
    char day;
    char month;
    int year;
};

struct AgendaItem {
    std::string className;
    DateTime date;
    Locations location;
    StudentClasses * classes;
    std::string teacher;
};

class TimeTable {
private:
    AgendaItem * agendaItems;
    
public:
    void viewTimeTable ();
};

#endif /* TimeTable_hpp */
