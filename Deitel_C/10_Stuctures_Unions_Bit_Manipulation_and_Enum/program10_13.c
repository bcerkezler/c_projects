// Unpacking Characters from an Integer
#include <stdio.h>

void unpackCharacters( char *aPtr, char *bPtr, char *cPtr, char *dPtr, unsigned pack );
void displayBits( unsigned value );

int main(void) {
    unsigned packed = 1633837924;
    char a, b, c, d;

    printf( "The packed character representation is:\n" );
    displayBits(packed);
    puts("");
    
    unpackCharacters( &a, &b, &c, &d, packed );
    printf( "\nThe unpacked characters are \'%c\', \'%c\', \'%c\' and \'%c\'\n", a, b, c, d );
     displayBits(a); puts("");
     displayBits(b); puts("");
     displayBits(c); puts("");
     displayBits(d);

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

void unpackCharacters(char *aPtr, char *bPtr, char *cPtr, char *dPtr, unsigned pack) {
    unsigned mask1 = 4278190080;
    unsigned mask2 = 16711680;
    unsigned mask3 = 65280;
    unsigned mask4 = 255;

    *aPtr = ( pack & mask1 ) >> 8;
    *bPtr = ( pack & mask2 ) >> 8;
    *cPtr = ( pack & mask3 ) >> 8;
    *dPtr = ( pack & mask4 );
}