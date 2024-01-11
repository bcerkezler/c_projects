// Exercise 40
// Multiples of 2 with an Infinite Loop
#include <stdio.h>

int main(void) {
    
    int i = 2;

    while (1) {
        printf("%d\n", i);
        i *= 2;
    }

    return 0;
}   