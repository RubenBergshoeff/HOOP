//
//  Decorator.cpp
//  DecoratorExample
//
//  Created by Ruben Bergshoeff on 10/4/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "Decorator.hpp"

void Decorator::draw(){
    widget->draw();
}

Decorator::Decorator(Widget* widget) : widget (widget) {
}
