//
//  Bankrekening.hpp
//  HOOP_Assignment05
//
//  Created by Ruben Bergshoeff on 10/17/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Bankrekening_hpp
#define Bankrekening_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include "Transactie.hpp"

class Bankrekening {
public:
    Bankrekening (float saldo, std::vector<Transactie>& transactieHistorie);
    void operator+=(const Transactie& rhs);
    void operator-=(const Transactie& rhs);
    Bankrekening operator+(const Transactie& rhs);
    Bankrekening operator-(const Transactie& rhs);
    friend std::ostream& operator<< (std::ostream& lhs, const Bankrekening& bankrekening);
private:
    float saldo;
    std::vector<Transactie> transactieHistorie;
};

#endif /* Bankrekening_hpp */
