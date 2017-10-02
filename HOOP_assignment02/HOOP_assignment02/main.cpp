//
//  main.cpp
//  HOOP_assignment02
//
//  Created by Ruben Bergshoeff on 9/26/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include <iostream>
#include "Module.hpp"
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<Student> studenten;
    
    studenten.push_back(Student("tim"));
    studenten.push_back(Student("jan"));
    
    vector<Module> moduleSystem;
    
    moduleSystem.push_back(Module("DEV", 3));
    moduleSystem.push_back(Module("Art", 2));
    
    moduleSystem[0].AssignStudent(&studenten[0]);
    moduleSystem[1].AssignStudent(&studenten[1]);
    
    studenten[0].DisplayStudent(&moduleSystem);
  //  studenten[1].DisplayStudent(&moduleSystem);
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
