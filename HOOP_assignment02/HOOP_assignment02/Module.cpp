//
//  Module.cpp
//  HOOP_assignment02
//
//  Created by Ruben Bergshoeff on 9/26/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "Module.hpp"

Module::Module(string name){
    this->naam = name;
}

Module::Module(string name, int EC){
    this->naam = name;
    this->EC = EC;
}

void Module::AssignDocent(Docent *docent){
    this->docent = *docent;
}

void Module::AssignStudent(Student *student){
    this->studenten.push_back(*student);
}

bool Module::ContainsStudent (Student* student){
    vector<Student>::iterator it = studenten.begin();
    while (it != studenten.end()){
        if (it->GetName() == student->GetName()){
            return true;
        }
    }
    return false;
}

int Module::GetECs(){
    return this->EC;
}

void Module::DisplayModule(){
    
}
