//
//  Transactie.cpp
//  HOOP_Assignment05
//
//  Created by Ruben Bergshoeff on 10/17/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "Transactie.hpp"

Transactie::Transactie (TransactieType transactieType, float hoeveelheid, Datum datum) : datum(1,1,1970){
    if (hoeveelheid < 0){
        try {
            throw std::exception();
        }
        catch (std::exception e)
        {
            std::cout << "Invalid hoeveelheid" <<std::endl;
        }
    }
    this->transactieType = transactieType;
    this->hoeveelheid = hoeveelheid;
    this->datum = datum;
}

float Transactie::GetSaldoInfluence() const{
    switch (transactieType) {
        case BIJ:
            return hoeveelheid;
            break;
        case AF:
            return -hoeveelheid;
            break;
    }
}

bool Transactie::operator==(const Transactie& rhs){
    return (transactieType == rhs.transactieType && hoeveelheid == rhs.hoeveelheid && datum == rhs.datum);
}

bool Transactie::operator!=(const Transactie& rhs){
    return !(transactieType == rhs.transactieType && hoeveelheid == rhs.hoeveelheid && datum == rhs.datum);
}

std::ostream& operator<< (std::ostream& lhs, const Transactie& transactie){
    switch (transactie.transactieType) {
        case Transactie::BIJ:
            lhs << "BIJ    ";
            break;
        case Transactie::AF:
            lhs << "AF     ";
            break;
    }
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << transactie.hoeveelheid;
    std::string hoeveelheidString = ss.str();
    
    while (hoeveelheidString.length() < 20){
        hoeveelheidString = " " + hoeveelheidString;
    }
    
    lhs << hoeveelheidString;
    lhs << "     ";
    lhs << transactie.datum;
    lhs << std::endl;
    return lhs;
}
