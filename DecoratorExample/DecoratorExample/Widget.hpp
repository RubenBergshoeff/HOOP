//
//  Widget.hpp
//  DecoratorExample
//
//  Created by Ruben Bergshoeff on 10/4/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Widget_hpp
#define Widget_hpp

#include <stdio.h>
#include <iostream>

class Widget {
public:
    virtual void draw() = 0;
};

#endif /* Widget_hpp */
