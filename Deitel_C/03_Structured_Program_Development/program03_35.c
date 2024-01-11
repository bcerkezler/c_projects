// Exercise 3.35
// Printing the Decimal Equivalent of a Binary Number
#include <stdio.h>

int main(void) {
    
    int bin, dec = 0;
    int i = 1;
    
    printf("Enter a binary number (-1 to exit): ");
    scanf("%d", &bin);
    
    while (bin != -1) {
        
        while (bin != 0) {
            dec += (bin % 10) * i;
            bin /= 10;
            i *= 2;
        }
        
        printf("Decimal equivalent = %d\n\n", dec);
        dec = 0;
        i = 1;

        printf("Enter a binary number (-1 to exit): ");
        scanf("%d", &bin);
    }


    return 0;
}   