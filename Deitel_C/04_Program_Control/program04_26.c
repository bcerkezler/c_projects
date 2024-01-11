// Exercise 4.25
// Table of Decimal, Binary, Octal and Hexadecimal Equivalents
#include <stdio.h>

int main() {
    
    double pi = 0; 
    
    printf("\nTerm\tValue of pi\n");
    
    for (int i = 1; i <= 10000; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 != 0) {
                pi += (4 / ((double) j * 2 - 1));
            } 
            else {
                pi -= (4 / ((double) j * 2 - 1));
            }
        }
        
        printf("%d\t%.8f\n", i, pi);

        pi = 0;
    }
    
    puts(" ");
   

    return 0;
}