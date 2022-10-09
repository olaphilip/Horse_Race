#include <iostream>
#include <stdlib.h>
#include "Race.h"
#include "Horse.h"





int main(){
    int seed;
    std::cout << "Please enter a seed: ";
    std::cin >> seed;
    srand(seed);
    Race r = Race();
    r.start();
    return 0;
}

