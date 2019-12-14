// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program does ics3u unit 6-04 cpp part

#include <iostream>
#include <time.h>


template <int rows, int cols>
int sumOfNumbers(int (&passedIn2DList)[rows][cols]) {
    // this function adds up all the elements in  a 2D array

    int total = 0;
    int counter = 0;
    float result = 0;

    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < cols; ++columnElement) {
            total += passedIn2DList[rowElement][columnElement];
        }
    }
    counter = rows * cols;
    result = total / counter;
    return result;
}


int main() {
    // this function uses a 2D array

    int aSingleRandomNumber = 0;
    int average = 0;
    const int rows = 2;
    const int columns = 5;
    int a2DArray[rows][columns];

    srand(time(NULL));

    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            aSingleRandomNumber = (rand() % 50) + 1;
            a2DArray[rowElement][columnElement] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << ", ";
        }
        std::cout << std::endl;
    }
    average = sumOfNumbers(a2DArray);
    std::cout << "The average is: " << average << std::endl;
}
