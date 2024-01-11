// Exercise 4.40
// World Population Growth
#include <stdio.h>

int main(void) {
    
    double world_pop = 8067272025;
    double growth_rate = 0.9;
    double increase;
    int counter = 1;


    puts("--World population growth--");
    printf("\nYear\tWorld Pop.\tIncrease\n\n");

    while (counter <= 75) {
        
        increase = (world_pop * growth_rate) / 100;
        world_pop += increase;
        printf("%d\t%.0f\t%.0f\n", counter, world_pop, increase);
        
        counter++;
    
    }

    return 0;
}