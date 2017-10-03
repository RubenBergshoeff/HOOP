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
#include "CBStandard.hpp"
#include "CBHerdMentality.hpp"
#include "CBLoners.hpp"

int main(int argc, const char * argv[]) {
    // timer for controlled framerate
    clock_t t;
    float deltaTime = 0;
    float timePassed = 0;
    t = clock();
    
    // duration of frame in seconds
    double framerate = 0.1; // fixed 60fps = 0.0166667
    
    // references to the defined behaviours
    CBStandard * standardBehaviour = new CBStandard();
    CBHerdMentality * herdBehaviour = new CBHerdMentality();
    CBLoners * lonerBehaviour = new CBLoners();
    
    // create grid, input preferred behaviour
    Grid grid = Grid(30, standardBehaviour);
    
    // insert code here...
    while (true){
        // process time passed
        deltaTime = ((float)(clock() - t)) / CLOCKS_PER_SEC;
        t = clock();
        timePassed += deltaTime;
        
        // if the time passed is equal to the duration of a frame, run code
        if (timePassed > (framerate)){
            grid.updateState();
            grid.draw();
            std::cout << "\n\n ----- \n\n";
            timePassed -= (framerate);
            cout << endl;
        }
    }
    
    return 0;
}
