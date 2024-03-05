// Reversing the Order of an Integer’s Bits
#include <stdio.h>

/* prototypes */
unsigned reverseBits(unsigned value);
void displayBits(unsigned value);

int main(void) {
    unsigned a; /* unsigned integer from user */

    /* prompt user and read value */
    printf("Enter an unsigned integer: ");
    scanf("%u", &a);

    /* display bits of a before reversed */
    printf( "\nBefore bits are reversed:\n" );
    displayBits(a);
    
    /* reverse bits and display results */
    a = reverseBits(a);
    printf( "\nAfter bits are reversed:\n" );
    displayBits(a);

    return 0;
}

/* reverseBits reverses the bits of value */
unsigned reverseBits(unsigned value) {
    unsigned mask = 1; /* bit mask */
    unsigned temp = 0; /* reversed bits */
    int i;  /* loop counter */

    /* loop through bits of value */
    for ( i = 0; i <= 15; i++ ) {
        temp <<= 1; /* left shift 1 bit */
        temp |= ( value & mask ); /* separate bit and place in temp */
        value >>= 1; /* right shift 1 bit */
    }

    return temp;
}

// display bits of an unsigned int value
void displayBits(unsigned value) {
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