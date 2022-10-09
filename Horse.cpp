//horse.cpp

#include <iostream>
#include "Horse.h"

Horse::Horse() {
    Horse::getPosition();
}

void Horse::advance() {
    int coinFlip = rand() %2;
    if (coinFlip == 1) {
        position += 1;
    }
}

int Horse::getPosition() {
    return position;
}                         