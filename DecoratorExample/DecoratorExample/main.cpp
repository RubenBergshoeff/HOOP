//
//  main.cpp
//  DecoratorExample
//
//  Created by Ruben Bergshoeff on 10/4/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Widget.hpp"
#include "TextWidget.hpp"
#include "InputWidget.hpp"
#include "BorderDecorator.hpp"
#include "TouchDecorator.hpp"

void draw(std::vector<Widget*> widgets){
    for (auto& widget:widgets) {
        widget->draw();
        std::cout << "---" << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    
    std::vector<Widget*> widgets;
    
    Widget* plainWidget = new InputWidget();
    widgets.push_back(plainWidget);
    
    Widget* borderedWidget = new BorderDecorator(new InputWidget());
    widgets.push_back(borderedWidget);
    
    Widget* borderedTouchableWidget = new TouchDecorator(
                                                         new BorderDecorator( new TextWidget()));
    widgets.push_back(borderedTouchableWidget);
    
    draw(widgets);
    
    // insert code here...
    return 0;
}
