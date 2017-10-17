//
//  Datum.hpp
//  HOOP_Assignment05
//
//  Created by Ruben Bergshoeff on 10/17/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Datum_hpp
#define Datum_hpp

#include <stdio.h>
#include <iostream>

struct Datum {
public:
    Datum (int dag, int maand, int jaar);
    bool operator==(const Datum& rhs);
    bool operator!=(const Datum& rhs);
    friend std::ostream& operator<< (std::ostream& lhs, const Datum& datum);
    int dag;
    int maand;
    int jaar;
};

#endif /* Datum_hpp */
