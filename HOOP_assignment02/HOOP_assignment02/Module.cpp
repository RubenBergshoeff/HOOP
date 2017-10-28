//
//  Module.cpp
//  HOOP_Assignment02
//
//  Created by Ruben Bergshoeff on 10/28/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "Module.hpp"

Module::Module (std::string naam, Docent &docent, std::vector<Student *> &students, int EC) : docent("standard"){
    this->naam = naam;
    this->docent = docent;
    this->students = students;
    this->EC = EC;
}

void Module::DisplayModule (){
    std::cout << "\n------------------------------------" << std::endl;
    std::cout << naam << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Docent: " << docent.GetName() << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Studenten:" << std::endl;
    for (int i = 0; i < students.size() ; i++) {
        std::cout << students[i]->GetName() << std::endl;
    }
}

void Module::ChangeDocent (Docent &docent){
    this->docent = docent;
}

void Module::ChangeEC (int newEC){
    EC = newEC;
}

void Module::AddStudent (Student &student){
    students.push_back(&student);
}

void Module::RemoveStudent (Student &student){
    for (int i = 0; i < students.size() ; i++) {
        if (students[i] == &student) {
            students.erase(students.begin() + i);
            return;
        }
    }
}

bool Module::ContainsStudent (Student &student){
    for (int i = 0; i < students.size() ; i++) {
        if (students[i] == &student) {
            return true;
        }
    }
    return false;
}

int Module::GetEC (){
    return EC;
}
