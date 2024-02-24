// Printing Numbers in Various Field Widths
#include <stdio.h>

int main(void) {
    
    printf("%7d\n", 12345);
    printf("%6d\n", 12345);
    printf("%5d\n", 12345);
    printf("%4d\n", 12345);
    
    printf("%8.4f\n", 1.2345);
    printf("%7.4f\n", 1.2345);
    printf("%6.4f\n", 1.2345);
    printf("%5.4f\n", 1.2345);
    printf("%4.4f\n", 1.2345);
    
    
    return 0;
}