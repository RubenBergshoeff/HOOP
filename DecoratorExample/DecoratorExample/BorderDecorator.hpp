//
//  BorderDecorator.hpp
//  DecoratorExample
//
//  Created by Ruben Bergshoeff on 10/4/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef BorderDecorator_hpp
#define BorderDecorator_hpp

#include <stdio.h>
#include "Decorator.hpp"

class BorderDecorator : public Decorator {
public:
    BorderDecorator(Widget* widget);
    void draw () override;
private:
    Widget* widget;
};

#endif /* BorderDecorator_hpp */
