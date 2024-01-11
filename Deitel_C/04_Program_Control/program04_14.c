// Exercise 4.14
// Factorials
#include <stdio.h>

int main(void) {
    
    int fact = 1;

    printf("\nIntegers\tFactorials\n");
    printf("--------\t----------\n");

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        printf("   %d!\t\t    %d\n", i, fact);
        fact = 1;
    }
    
    puts("\n ");

    return 0;
}