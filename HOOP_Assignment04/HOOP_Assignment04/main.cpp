//
//  main.cpp
//  HOOP_Assignment04
//
//  Created by Ruben Bergshoeff on 10/10/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "Queue.hpp"
#include "ElfNPC.hpp"
#include "OrkNPC.hpp"
#include "FarmerDecorator.hpp"
#include "SoldierDecorator.hpp"
#include "ShamanDecorator.hpp"

using namespace std;

template <typename T, size_t SIZE>
void sortArray(T(&array)[SIZE]){
    T temp;
    for (size_t i = 0; i < SIZE; i++){
        for (size_t j = 0; j < SIZE - 1; j++){
            if (array[j + 1] < array [j]){
                temp = array[j];
                array[j] = array [j + 1];
                array [j + 1] = temp;
            }
        }
    }
}


void render(std::vector<NPCBase *> npcs){
    for (auto& npc:npcs){
        npc->render();
        std::cout << "---" << std::endl;
    }
}


void testTemplates () {
    int intArray[] = {5,3,2,1};
    string stringArray[] = {"whats","up","boy"};
    sortArray (intArray);
    sortArray (stringArray);
    
    Queue<int> intQueue = Queue<int>(0);
    intQueue.put(1);
    intQueue.put(2);
    intQueue.put(3);
    intQueue.put(4);
    std::cout << "size: " << intQueue.size();
    std::cout << endl;
    std::cout << "firstElement: " << intQueue.get();
    std::cout << endl;
    std::cout << "size: " << intQueue.size();
    std::cout << endl;
    std::cout << "firstElement: " << intQueue.get();
    std::cout << endl;
    std::cout << "size: " << intQueue.size();
    std::cout << endl;
    std::cout << "firstElement: " << intQueue.get();
    std::cout << endl;
    std::cout << endl;
}


void testNPCs (){
    std::vector<NPCBase *> npcs;
    
    NPCBase * farmerOrk = new FarmerDecorator(new OrkNPC("Tim"));
    npcs.push_back(farmerOrk);
    
    NPCBase * shamanElf = new ShamanDecorator(new ElfNPC("Arwen"));
    npcs.push_back(shamanElf);
    
    NPCBase * soldierElf = new SoldierDecorator(new ElfNPC("Legolas"));
    npcs.push_back(soldierElf);
    
    npcs.pop_back();
    
    
    render(npcs);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    testTemplates();
    testNPCs();
    
    return 0;
}
