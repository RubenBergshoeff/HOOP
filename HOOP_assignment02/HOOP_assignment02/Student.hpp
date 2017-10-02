//
//  Student.hpp
//  HOOP_assignment02
//
//  Created by Ruben Bergshoeff on 9/26/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include "Module.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Module;

class Student {
public:
    Student(string naam);
    void DisplayStudent (vector<Module>* moduleSystem);
    string GetName ();
private:
    string naam;
};

#endif /* Student_hpp */
