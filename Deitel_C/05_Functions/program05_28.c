// Reversing Digits
#include <stdio.h>
#include <math.h>

int reverseDigits(int);

int main(void) {
    int number;

    printf("Enter the number to be reversed: ");
    scanf("%d", &number);      
    printf("%d", reverseDigits(number));
    
    return 0;
}

int reverseDigits(int number) {
    int i;
    int tmp;
    int digitCount = 0;
    int reverse = 0;
    int mul;
    int digit;
    
    tmp = number;

    while (tmp != 0) {
        tmp /= 10;
        digitCount++;
    }

    mul = pow(10, digitCount-1);
    
    for (i = 1; i <= digitCount; i++) {
        digit = number % 10;
        reverse += digit * mul;
        number /= 10;
        mul /= 10;
    }
    
    return reverse;
}





       