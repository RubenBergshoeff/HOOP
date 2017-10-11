//
//  TextWidget.hpp
//  DecoratorExample
//
//  Created by Ruben Bergshoeff on 10/4/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef TextWidget_hpp
#define TextWidget_hpp

#include <stdio.h>
#include "Widget.hpp"

class TextWidget : public Widget {
public:
    void draw () override;
};

#endif /* TextWidget_hpp */
