// Exercise 2.16
// Arithmetic
#include <stdio.h>

int main(void) {
    
    int int1, int2;

    printf("Enter two integers: ");
    scanf("%d %d", &int1, &int2);

    printf("Sum: %d\n", int1 + int2);
    printf("Product: %d\n", int1 * int2);
    printf("Difference: %d\n", int1 - int2);
    printf("Quotient: %d\n", int1 / int2);
    printf("Remainder: %d\n", int1 % int2);

    return 0;
}