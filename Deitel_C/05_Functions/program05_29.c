// Greatest Common Divisor
#include <stdio.h>

int gcd(int,int);

int main(void) {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);      
    printf("%d is their GCD.", gcd(num1, num2));
    
    return 0;
}

int gcd(int num1, int num2) {
    int i;
    int gcd;

    if (num1 > num2) {
        i = num1 / 2;
    }
    else {
        i = num2 / 2;
    }
    
    
    while (i >= 1) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
            return gcd;
        }
        else {
            i--;
        }
    }
}