// Portable displayBits Function
#include <stdio.h>

void displayBits(unsigned int value); /* prototype */

int main(void) {
    unsigned x; /* value from user */

    /* prompt user and read value */
    printf("Enter an unsigned integer: ");
    scanf("%u", &x);
    displayBits(x);

    return 0;
}

// display bits of an unsigned int value
void displayBits(unsigned value) {
    unsigned c; /* bit counter */
    unsigned int displayMask; /* bit mask */

    /* if system uses 4-byte integers */
    if (sizeof(int) == 4) {
        displayMask = 1 << 31;
    }
    else { /* assume default of 2-byte integers */
        displayMask = 1 << 15;
    }
    
    printf("%7u = ", value);

    // loop through bits
    for (c = 1; c <= sizeof( int ) * 8; c++) {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1; // shift value left by 1

        if (c % 8 == 0) { // output space after 8 bits
            putchar(' ');
        }
    }
    putchar('\n');
}