//
//  Bankrekening.cpp
//  HOOP_Assignment05
//
//  Created by Ruben Bergshoeff on 10/17/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "Bankrekening.hpp"


Bankrekening::Bankrekening (float saldo, std::vector<Transactie>& transactieHistorie){
    this->saldo = saldo;
    this->transactieHistorie = transactieHistorie;
}

void Bankrekening::operator+=(const Transactie& rhs){
    saldo += rhs.GetSaldoInfluence();
    transactieHistorie.push_back(rhs);
}

void Bankrekening::operator-=(const Transactie& rhs){
    for (std::vector<Transactie>::iterator it = transactieHistorie.begin(); it != transactieHistorie.end(); ++it){
        if (*it == rhs){
            saldo -= rhs.GetSaldoInfluence();
            transactieHistorie.erase(it);
            break;
        }
    }
}

Bankrekening Bankrekening::operator+(const Transactie& rhs){
    saldo += rhs.GetSaldoInfluence();
    transactieHistorie.push_back(rhs);
    return *this;
}

Bankrekening Bankrekening::operator-(const Transactie& rhs){
    for (std::vector<Transactie>::iterator it = transactieHistorie.begin(); it != transactieHistorie.end(); ++it){
        if (*it == rhs){
            saldo -= rhs.GetSaldoInfluence();
            transactieHistorie.erase(it);
            break;
        }
    }
    return *this;
}

std::ostream& operator<< (std::ostream& lhs, const Bankrekening& bankrekening){
    lhs << std::fixed << std::setprecision(2);
    
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << bankrekening.saldo;
    std::string hoeveelheidString = "saldo: " + ss.str();
    
    while (hoeveelheidString.length() < 29){
        hoeveelheidString = " " + hoeveelheidString;
    }
    
    // draw line
    for (int i = 0; i < 42; i++) {
        lhs << "-";
    }
    lhs << std::endl;
    
    lhs << "#Bankrekening" << hoeveelheidString << std::endl;
    
    // draw line
    for (int i = 0; i < 42; i++) {
        lhs << "-";
    }
    lhs << std::endl;
    
    for (int i = 0; i < bankrekening.transactieHistorie.size(); ++i){
        lhs << "  " << bankrekening.transactieHistorie[i];
    }
    // draw line
    for (int i = 0; i < 42; i++) {
        lhs << "-";
    }
    lhs << std::endl;
    
    lhs << std::endl;
    lhs << std::endl;
    return lhs;
}

