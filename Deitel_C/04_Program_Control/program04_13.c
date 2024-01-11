// Exercise 4.13
// Calculating the Product of Odd Integers
#include <stdio.h>

int main(void) {
    
    int product = 1;

    for (int i = 1; i <= 15; i += 2) {
        product *= i;
    }
    
    printf("\nProduct of odd integers from 2 to 30: %d\n", product);
    puts(" ");
    
    return 0;
}