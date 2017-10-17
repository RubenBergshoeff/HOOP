//
//  Transactie.hpp
//  HOOP_Assignment05
//
//  Created by Ruben Bergshoeff on 10/17/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Transactie_hpp
#define Transactie_hpp

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Datum.hpp"

class Transactie {
public:
    enum TransactieType {BIJ, AF};
    Transactie (TransactieType transactieType, float hoeveelheid, Datum datum);
    float GetSaldoInfluence () const;
    bool operator==(const Transactie& rhs);
    bool operator!=(const Transactie& rhs);
    friend std::ostream& operator<< (std::ostream& lhs, const Transactie& transactie);
private:
    TransactieType transactieType;
    float hoeveelheid;
    Datum datum;
};

#endif /* Transactie_hpp */
