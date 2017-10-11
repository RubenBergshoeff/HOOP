//
//  TouchDecorator.hpp
//  DecoratorExample
//
//  Created by Ruben Bergshoeff on 10/4/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef TouchDecorator_hpp
#define TouchDecorator_hpp

#include <stdio.h>
#include "Decorator.hpp"

class TouchDecorator : public Decorator {
public:
    TouchDecorator(Widget* widget);
    void draw () override;
private:
    Widget* widget;
};

#endif /* TouchDecorator_hpp */
