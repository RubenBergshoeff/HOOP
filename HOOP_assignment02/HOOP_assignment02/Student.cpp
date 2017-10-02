//
//  Student.cpp
//  HOOP_assignment02
//
//  Created by Ruben Bergshoeff on 9/26/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "Student.hpp"

Student::Student(string naam){
    this->naam = naam;
}

void Student::DisplayStudent (vector<Module>* moduleSystem){
    int ECs = 0;
    vector<Module>::iterator it = moduleSystem->begin();
    while (it != moduleSystem->end()){
        if (it->ContainsStudent(this)){
            ECs += it->GetECs();
        }
        it++;
    }
    cout << naam << "----" << ECs << "\n";
}

string Student::GetName (){
    return this->naam;
}
