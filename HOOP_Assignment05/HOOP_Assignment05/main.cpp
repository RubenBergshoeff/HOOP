//
//  main.cpp
//  HOOP_Assignment05
//
//  Created by Ruben Bergshoeff on 10/17/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include <iostream>
#include "Bankrekening.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::vector<Transactie> transacties;
    Transactie transactie1 = Transactie(Transactie::BIJ, 3, Datum(1,5,2016));
    transacties.push_back(transactie1);
    
    Bankrekening bankrekening = Bankrekening(3, transacties);
    std::cout << bankrekening;
    
    bankrekening += Transactie(Transactie::BIJ, 3, Datum(1,6,2016));
    bankrekening += Transactie(Transactie::BIJ, 12.50, Datum(1,8,2016));
    std::cout << bankrekening;
    
    bankrekening += Transactie(Transactie::AF, 5, Datum(3,8,2016));
    std::cout << bankrekening;
    
    bankrekening -= Transactie(Transactie::AF, 5, Datum(3,8,2016));
    std::cout << bankrekening;
    
    bankrekening = bankrekening + Transactie(Transactie::BIJ, 100, Datum(3,8,2016));
    std::cout << bankrekening;
    
    return 0;
}
