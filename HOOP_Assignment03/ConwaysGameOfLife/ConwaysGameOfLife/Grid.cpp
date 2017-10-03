//
//  Grid.cpp
//  ConwaysGameOfLife
//
//  Created by Ruben Bergshoeff on 10/1/17.
//  Copyright © 2017 Ruben Bergshoeff. All rights reserved.
//

#include "Grid.hpp"
#include <random>
#include <iostream>
#include "CBStandard.hpp"

Grid::Grid(int size){
    // for now give all cells a reference to the defined standard behaviour
    CBStandard * standardBehaviour = new CBStandard();
    
    // create multidimensional vector with given size
    for (int i = 0; i < size ; i++){
        vector<Cell> row;
        for (int j = 0; j < size ; j++){
            bool state = (rand() % 2) == 0 ? true : false;
            row.push_back(Cell(state, standardBehaviour));
        }
        this->cells.push_back(row);
    }
}

int Grid::getLivingNeighbours(int x, int y){
    int livingNeighbours = 0;
    int gridSize = (int)(cells.size() - 1);
    
    // left top
    if (x > 0 && y > 0){
        if (cells[x - 1][y - 1].alive){
            livingNeighbours ++;
        }
    }
    // left
    if (x > 0) {
        if (cells[x - 1][y].alive){
            livingNeighbours++;
        }
    }
    // left bottom
    if (x > 0 && y < gridSize){
        if (cells[x - 1][y + 1].alive){
            livingNeighbours ++;
        }
    }
    // mid top
    if (y > 0){
        if (cells[x][y - 1].alive){
            livingNeighbours ++;
        }
    }
    // mid bottom
    if (y < gridSize){
        if (cells[x][y + 1].alive){
            livingNeighbours ++;
        }
    }
    // right top
    if (x < gridSize && y > 0){
        if (cells[x + 1][y - 1].alive){
            livingNeighbours ++;
        }
    }
    // right
    if (x < gridSize) {
        if (cells[x + 1][y].alive){
            livingNeighbours++;
        }
    }
    // right bottom
    if (x < gridSize && y < gridSize){
        if (cells[x + 1][y + 1].alive){
            livingNeighbours ++;
        }
    }
    
    return livingNeighbours;
}

void Grid::updateState(){
    // define next state for each cell
    vector<vector<Cell>>::iterator itRows = cells.begin();
    while (itRows != cells.end()){
        vector<Cell>::iterator itCells = itRows->begin();
        while (itCells != itRows->end()){
            // get iteration index by subtracting the vector.begin() from the iterator
            int livingNeighbours = getLivingNeighbours((int)(itRows - cells.begin()), (int) (itCells  - itRows->begin()));
            itCells->nextState = itCells->behaviour->newState(livingNeighbours, itCells->alive);
            itCells++;
        }
        itRows++;
    }
    // apply next state to each cell
    itRows = cells.begin();
    while (itRows != cells.end()){
        vector<Cell>::iterator itCells = itRows->begin();
        while (itCells != itRows->end()){
            itCells->alive = itCells->nextState;
            itCells++;
        }
        itRows++;
    }
}

void Grid::draw() {
    vector<vector<Cell>>::iterator itRows = cells.begin();
    while (itRows != cells.end()){
        string row;
        vector<Cell>::iterator itCells = itRows->begin();
        while (itCells != itRows->end()){
            string value = itCells->alive ? "O " : "  ";
            row.append(value);
            itCells++;
        }
        row.append("\n");
        std::cout << row;
        itRows++;
    }
}
