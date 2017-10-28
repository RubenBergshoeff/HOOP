//
//  Module.hpp
//  HOOP_Assignment02
//
//  Created by Ruben Bergshoeff on 10/28/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Module_hpp
#define Module_hpp

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include "Student.hpp"
#include "Docent.hpp"

class Module {
public:
    Module (std::string naam, Docent &docent, std::vector<Student *> &students, int EC);
    void DisplayModule ();
    void ChangeDocent (Docent &docent);
    void ChangeEC (int EC);
    void AddStudent (Student &student);
    void RemoveStudent (Student &student);
    bool ContainsStudent (Student &student);
    int GetEC ();
private:
    std::string naam;
    Docent docent;
    std::vector<Student *> students;
    int EC;
};

#endif /* Module_hpp */
