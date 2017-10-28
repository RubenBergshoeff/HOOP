//
//  ConcurrentVector.hpp
//  HOOP_Assignment06
//
//  Created by Ruben Bergshoeff on 10/18/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef ConcurrentVector_hpp
#define ConcurrentVector_hpp

#include <stdio.h>
#include <iostream>
#include <mutex>

template <class T>
class ConcurrentVector{
public:
    ConcurrentVector () {
        arraySize = 0;
    }
    void push_back (T newElement) {
        mutex.lock();
        T *tempPointer = new T[arraySize + 1];
        if (arraySize > 0){
            for (int i = 0; i < arraySize; i++){
                *(tempPointer + i) = *(values + i);
            }
            delete values;
        }
        *(tempPointer + arraySize) = newElement;
        values = tempPointer;
        arraySize++;
        mutex.unlock();
    }
    void pop_back() {
        if (arraySize > 0){
            mutex.lock();
            if (arraySize == 1){
                delete values;
            } else {
                T *tempPointer = new T[arraySize - 1];
                if (arraySize > 0){
                    for (int i = 0; i < (arraySize - 1); i++){
                        *(tempPointer + i) = *(values + i);
                    }
                    delete values;
                }
                values = tempPointer;
            }
            arraySize--;
            mutex.unlock();
        }
    }
    int size () {
        return arraySize;
    }
    T& operator[](int key){
        mutex.lock();
        if (key < 0 || key >= arraySize){
            try {
                throw std::exception();
            }
            catch (std::exception e)
            {
                std::cout << "Invalid key" <<std::endl;
            }
        }
        T& tmp = *(values + key);
        mutex.unlock();
        return tmp;
    }
private:
    std::mutex mutex;
    int arraySize;
    T *values;
};

#endif /* ConcurrentVector_hpp */
