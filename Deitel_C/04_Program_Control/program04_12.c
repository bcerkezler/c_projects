// Exercise 4.12
// Calculating the Sum of Even Integers
#include <stdio.h>

int main(void) {
    
    int sum = 0;

    for (int i = 2; i <= 30; i += 2) {
        sum += i;
    }
    
    printf("\nSum of even integers from 2 to 30: %d\n", sum);
    puts(" ");
    
    return 0;
}