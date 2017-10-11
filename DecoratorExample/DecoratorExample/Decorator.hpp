//
//  Decorator.hpp
//  DecoratorExample
//
//  Created by Ruben Bergshoeff on 10/4/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Decorator_hpp
#define Decorator_hpp

#include <stdio.h>
#include "Widget.hpp"

class Decorator : public Widget {
public:
    Decorator(Widget* widget);
    void draw () override;
private:
    Widget* widget;
};

#endif /* Decorator_hpp */
