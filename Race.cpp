#include <iostream>
#include <stdlib.h>
#include "Race.h"
#include "Horse.h"

Race::Race() {
    Race::length = 15;
}

Race::Race(int length) {
    Race::length = length;
}

void Race::printLane(int horseNum) {
    for (int i = 0; i < length; i++) {
        int pos = h[horseNum].getPosition(); // get the postion of the horses
        if (i == pos) {
            std::cout << horseNum;
        } // end if
        else {
            std::cout << ".";
        }
    } // end for loop
    std::cout << "\n";
} // end printlane

void Race::start() {
    bool keepGoing = true;
    for (int j = 0; j < 5; j++){
        printLane(j);
    }
    std::cout << "\n";
   
    while (keepGoing) {
        for (int k = 0; k < 5; k++) {
            h[k].advance();
            printLane(k);
            if (h[k].getPosition() == length) {
                keepGoing = false;
                std::cout << "Horse " << k << " wins" << std::endl;
            }
        }
        std::cout << "\n";
    }
}