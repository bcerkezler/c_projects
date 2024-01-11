// Recursive Exponentiation
#include <stdio.h>

int power(int base, int exponent);

int main(void) {
    
    int base, exponent;

    printf("Enter a base and an exponent: ");
    scanf("%d%d", &base, &exponent);
    printf("%d ^ %d is %d", base, exponent, power(base,exponent));

    return 0;

}

int power(int base, int exponent) {
    
    if (exponent == 1) {
        return base;
    }
    else {
        return base * power(base, exponent-1);
    }
    
}