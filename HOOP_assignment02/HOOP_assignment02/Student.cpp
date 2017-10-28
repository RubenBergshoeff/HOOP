//
//  Student.cpp
//  HOOP_Assignment02
//
//  Created by Ruben Bergshoeff on 10/28/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "Student.hpp"

Student::Student (std::string naam){
    this->naam = naam;
}
std::string Student::GetName (){
    return this->naam;
}
