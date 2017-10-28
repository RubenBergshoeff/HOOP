//
//  main.cpp
//  HOOP_Assignment06
//
//  Created by Ruben Bergshoeff on 10/18/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include <iostream>
#include <vector>
#include <thread>
#include "ConcurrentVector.hpp"

ConcurrentVector<int> intVector;
std::vector<int> intVector2;

void pushAndPop () {
    for (int i = 0; i < 1000; ++i) {
        intVector.push_back(1);
        intVector.pop_back();
    }
}


#include <queue>
#include <thread>
#include <iostream>

int c = 0;
bool done = false;
std::queue<int> goods;
std::mutex mutex;

void producer() {
    for (int i = 0; i < 500; ++i) {
        mutex.lock();
        goods.push(i);
        c++;
        mutex.unlock();
    }
    
    done = true;
}

void consumer() {
    while (!done) {
        while (!goods.empty()) {
            mutex.lock();
            goods.pop();
            c--;
            mutex.unlock();
        }
    }
}

void producerConsumerTest() {
    std::thread producerThread(producer);
    std::thread consumerThread(consumer);
    
    producerThread.join();
    consumerThread.join();
    std::cout << "Net: " << c << std::endl;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    std::thread thread_1 (&pushAndPop);
    std::thread thread_2 (&pushAndPop);
    thread_1.join();
    thread_2.join();
    
    std::cout << intVector.size() << std::endl;
    
//    std::cout << intVector[4] << std::endl;
    
    producerConsumerTest();
    
    return 0;
}
