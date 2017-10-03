//
//  main.cpp
//  ConwaysGameOfLife
//
//  Created by Ruben Bergshoeff on 10/1/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include <iostream>
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include "Grid.hpp"

int main(int argc, const char * argv[]) {
    // controlled framerate
    clock_t t;
    float deltaTime = 0;
    float timePassed = 0;
    t = clock();
    double framerate = 0.1; // fixed 60fps = 0.0166667
    
    Grid grid = Grid(12);
    
    // insert code here...
    while (true){
        deltaTime = ((float)(clock() - t)) / CLOCKS_PER_SEC;
        t = clock();
        timePassed += deltaTime;
        
        if (timePassed > (framerate)){
            grid.updateState();
            grid.draw();
            std::cout << "\n\n ----- \n\n";
            timePassed -= (framerate);
        }
    }
    
    return 0;
}
