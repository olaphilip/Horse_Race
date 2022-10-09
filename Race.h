#ifndef RACE_H
#define RACE_H

#include <iostream>
#include <stdlib.h>
#include "Horse.h"

const int totalHorses = 5;

class Race {
private:
    // Horse::Horse[] h = {new Horse(), new Horse(), new Horse(), new Horse(), new Horse()};
    Horse *h = {new Horse()};
    int length;
    
public:
    Race();
    explicit Race(int length);
    void printLane(int horseNum);
    void start();
};

#endif