//
//  Queue.hpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

template <class T>
class Queue {
public:
    Queue (int size) {
        this->values = new T [size];
        this->arraySize = size;
    }
    void put (T newElement) {
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
    }
    T get (){
        if (arraySize > 0){
            T firstElement = *values;
            T *tempPointer = new T[arraySize - 1];
            for (int i = 0; i < arraySize - 1; i++){
                *(tempPointer + i) = *(values + i + 1);
            }
            delete values;
            values = tempPointer;
            arraySize--;
            return firstElement;
        }
        else {
            try {
                throw exception();
            }
            catch (exception e)
            {
                std::cout << "no elements in Queue" <<endl;
            }
        }
        return NULL;
    }
    int size (){
        return this->arraySize;
    }
private:
    int arraySize;
    T *values;
};

#endif /* Queue_hpp */
