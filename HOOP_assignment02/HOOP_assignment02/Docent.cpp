//
//  Docent.cpp
//  HOOP_Assignment02
//
//  Created by Ruben Bergshoeff on 10/28/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "Docent.hpp"


Docent::Docent (std::string naam){
    this->naam = naam;
}
std::string Docent::GetName (){
    return this->naam;
}
