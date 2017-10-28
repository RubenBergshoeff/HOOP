//
//  Student.hpp
//  HOOP_Assignment02
//
//  Created by Ruben Bergshoeff on 10/28/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <string>

class Student {
public:
    Student (std::string naam);
    std::string GetName ();
private:
    std::string naam;
};

#endif /* Student_hpp */
