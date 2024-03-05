// Left-Shifting Integers
#include <stdio.h>

void displayBits(unsigned int value);
int power2(int number, int pow);

int main(void) {
    unsigned int num;
    int pow;
    int result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a power: ");
    scanf("%d", &pow);
    
    result = power2(num, pow);
    displayBits(result);

    return 0;
}

// display bits of an unsigned int value
void displayBits(unsigned int value) {
    // define displayMask and left shift 31 bits
    unsigned int displayMask = 1 << 31;

    printf("%10u = ", value);

    // loop through bits
    for (unsigned int c = 1; c <= 32; c++) {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1; // shift value left by 1

        if (c % 8 == 0) { // output space after 8 bits
            putchar(' ');
        }
    }
    putchar(' ');
}

int power2(int number, int pow) {

    for (int i = 1; i <= pow; i++) {
        number <<= 1; 
    }
    
    return number;
}