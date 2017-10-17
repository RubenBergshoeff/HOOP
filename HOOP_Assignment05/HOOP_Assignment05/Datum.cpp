//
//  Datum.cpp
//  HOOP_Assignment05
//
//  Created by Ruben Bergshoeff on 10/17/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "Datum.hpp"
#include <stdio.h>
#include <iostream>

Datum::Datum (int dag, int maand, int jaar){
    if (dag < 1 || maand < 1 || jaar < 1970){
        try {
            throw std::exception();
        }
        catch (std::exception e)
        {
            std::cout << "Invalid date" <<std::endl;
        }
    }
    if (maand == 2){
        // schrikkeljaar
        if (((jaar % 4 == 0) && not (jaar % 100 == 0)) || (jaar % 400 == 0)){
            if (dag > 29) {
                try {
                    throw std::exception();
                }
                catch (std::exception e)
                {
                    std::cout << "Invalid date" <<std::endl;
                }
            }
        } else {
            if (dag > 28){
                try {
                    throw std::exception();
                }
                catch (std::exception e)
                {
                    std::cout << "Invalid date" <<std::endl;
                }
            }
        }
    } else {
        if ((maand <= 7 && maand % 2 == 1) || (maand > 7 && maand % 2 == 0)){
            if (dag > 31){
                try {
                    throw std::exception();
                }
                catch (std::exception e)
                {
                    std::cout << "Invalid date" <<std::endl;
                }
            }
        } else {
            if (dag > 30) {
                try {
                    throw std::exception();
                }
                catch (std::exception e)
                {
                    std::cout << "Invalid date" <<std::endl;
                }
            }
        }
    }
    this->dag = dag;
    this->maand = maand;
    this->jaar = jaar;
}


bool Datum::operator==(const Datum& rhs){
    return (dag == rhs.dag && maand == rhs.maand && jaar == rhs.jaar);
}

bool Datum::operator!=(const Datum& rhs){
    return !(dag == rhs.dag && maand == rhs.maand && jaar == rhs.jaar);
}

std::ostream& operator<< (std::ostream& lhs, const Datum& datum){
    lhs << datum.jaar << "-" << datum.maand << "-" << datum.dag;
    return lhs;
}
