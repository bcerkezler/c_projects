// Exponentiation
#include <stdio.h>

int integerPower(int base, int exponent);

int main(void) {
   
    int base, exponent;

    printf("Enter the base and the exponent:\n");
    scanf("%d%d", &base, &exponent);

    printf("%d ^ %d is %d", base, exponent, integerPower(base, exponent));

    return 0;
}


int integerPower(int base, int exponent) {
    int result = 1;

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    
    return result;
}