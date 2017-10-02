//
//  Module.hpp
//  HOOP_assignment02
//
//  Created by Ruben Bergshoeff on 9/26/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Module_hpp
#define Module_hpp

#include "Student.hpp"
#include "Docent.hpp"

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

class Student;

class Module {
public:
    Module(string name);
    Module(string name, int EC);
    void AssignDocent(Docent* docent);
    void AssignStudent(Student* student);
    bool ContainsStudent (Student* student);
    int GetECs ();
    void DisplayModule();
private:
    Docent docent;
    vector<Student> studenten;
    string naam;
    int EC;
};

#endif /* Module_hpp */
