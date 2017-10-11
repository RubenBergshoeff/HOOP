//
//  InputWidget.hpp
//  DecoratorExample
//
//  Created by Ruben Bergshoeff on 10/4/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef InputWidget_hpp
#define InputWidget_hpp

#include <stdio.h>
#include "Widget.hpp"

class InputWidget : public Widget {
public:
    void draw () override;
};

#endif /* InputWidget_hpp */
