//
//  main.cpp
//  HOOP_Assignment02
//
//  Created by Ruben Bergshoeff on 10/28/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include <iostream>
#include "Module.hpp"

void showECs (std::vector<Student *> students, std::vector<Module *> modules) {
    std::cout << "\n------------------------------------" << std::endl;
    for (int iStudent = 0; iStudent < students.size(); iStudent++) {
        int ECs = 0;
        for (int iModule = 0; iModule < modules.size(); iModule++) {
            if (modules[iModule]->ContainsStudent(*students[iStudent])) {
                ECs += modules[iModule]->GetEC();
            }
        }
        std::cout << students[iStudent]->GetName() << " has " << ECs << " ECs" << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    std::vector<Student *> students;
    std::vector<Module *> modules;
    
    Docent *docent1 = new Docent("Valentijn");
    Docent *docent2 = new Docent("Aaron");
    Docent *docent3 = new Docent("Edwin");
    
    students.push_back(new Student("Ruben"));
    students.push_back(new Student("Sergi"));
    students.push_back(new Student("Vincent"));
    students.push_back(new Student("Sten"));
    students.push_back(new Student("Jelle"));
    students.push_back(new Student("Nathan"));
    students.push_back(new Student("Celine"));
    students.push_back(new Student("Josien"));
    students.push_back(new Student("Just"));
    students.push_back(new Student("Frans"));
    
    std::vector<Student *> module1Students;
    std::vector<Student *> module2Students;
    std::vector<Student *> module3Students;
    
    for (int iStudent = 0; iStudent < students.size(); iStudent++) {
        if (iStudent % 2 == 0) {
            module1Students.push_back(students[iStudent]);
            if (iStudent % 3 == 0) {
                module2Students.push_back(students[iStudent]);
            }
        } else {
            module2Students.push_back(students[iStudent]);
            if (iStudent % 3 == 0) {
                module1Students.push_back(students[iStudent]);
            }
        }
        if (iStudent * 2 % 3 == 0) {
            module3Students.push_back(students[iStudent]);
        }
    }
    
    modules.push_back(new Module("DEV", *docent1, module1Students, 1));
    modules.push_back(new Module("DEV2", *docent2, module2Students, 10));
    modules.push_back(new Module("C++", *docent3, module3Students, 100));
    
    for (int iModule = 0 ; iModule < modules.size() ; iModule++) {
        modules[iModule]->DisplayModule();
    }
    showECs(students, modules);
    
    modules[2]->ChangeEC(200);
    std::cout << "\n\n=======================" << std::endl;
    std::cout << "EC veranderd van C++" << std::endl;
    std::cout << "=======================\n" << std::endl;
    showECs(students, modules);
    
    
    std::cout << "\n\n=======================" << std::endl;
    std::cout << "Student Ruben verwijderd uit DEV" << std::endl;
    std::cout << "=======================\n" << std::endl;
    
    modules[0]->RemoveStudent(*students[0]);
    
    for (int iModule = 0 ; iModule < modules.size() ; iModule++) {
        modules[iModule]->DisplayModule();
    }
    showECs(students, modules);
    
    return 0;
}
