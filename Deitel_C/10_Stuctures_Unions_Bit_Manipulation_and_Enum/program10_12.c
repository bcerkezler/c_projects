// Packing Characters into an Integer
#include <stdio.h>

void displayBits(unsigned int value);
unsigned int packCharacters(unsigned int value, char c);

int main(void) {
    unsigned int var = 0;
    char c;

    displayBits(var);

    for (int i = 1; i <= 4; i++) {
        printf("\nEnter a character: ");
        scanf("%c", &c);
        getchar();
        var = packCharacters(var, c);
        displayBits(var);
    }

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

unsigned int packCharacters(unsigned int value, char c) {
    value <<= 8;
    value |= c;

    return value;
}