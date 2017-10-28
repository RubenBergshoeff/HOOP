//
//  Docent.hpp
//  HOOP_Assignment02
//
//  Created by Ruben Bergshoeff on 10/28/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Docent_hpp
#define Docent_hpp

#include <stdio.h>
#include <string>

class Docent {
public:
    Docent (std::string naam);
    std::string GetName ();
private:
    std::string naam;
};

#endif /* Docent_hpp */
