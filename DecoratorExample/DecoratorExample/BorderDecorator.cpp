//
//  BorderDecorator.cpp
//  DecoratorExample
//
//  Created by Ruben Bergshoeff on 10/4/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "BorderDecorator.hpp"

BorderDecorator::BorderDecorator(Widget* widget) : Decorator(widget) {}

void BorderDecorator::draw() {
    Decorator::draw();
    std::cout << "Border\n";
}
