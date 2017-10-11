//
//  TouchDecorator.cpp
//  DecoratorExample
//
//  Created by Ruben Bergshoeff on 10/4/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "TouchDecorator.hpp"

TouchDecorator::TouchDecorator(Widget* widget) : Decorator(widget) {}

void TouchDecorator::draw() {
    Decorator::draw();
    std::cout << "Touch\n";
}
