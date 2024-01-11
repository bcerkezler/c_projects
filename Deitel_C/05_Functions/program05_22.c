// Separating Digits
#include <stdio.h>

void seperateDigits(int number);


int main(void) {
    int number;
    int flag = 1;

    while (flag) {
        printf("Enter an integer: ");
        scanf("%d", &number);
        if (number >= 1 || number <= 32767) {
            flag = 0;
        }
        else {
            printf("Out of bounds!\n");
        }
    }
    
    seperateDigits(number);

    return 0;
}


void seperateDigits(int number) {
    int divider = 10000;
    int quotient, remainder;

    remainder = number;

    while (divider != 0) {
        quotient = remainder / divider;
        
        if (quotient != 0) {
            printf("%d  ", quotient);
            remainder %= divider;
            divider /= 10;
        }
        else {
            divider /= 10; 
        }
    }
}



       