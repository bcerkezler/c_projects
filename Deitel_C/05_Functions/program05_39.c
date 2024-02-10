// Recursive Greatest Common Divisor
#include <stdio.h>

int gcd(int x, int y);

int main(void) {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);

    printf("Greatest common divisor of %d and %d is %d.", x, y, gcd(x, y));
    
    return 0;
}

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    else {
        gcd(y, x % y);
    }
    
}