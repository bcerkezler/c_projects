// Write Your Own Character-Handling Functions
#include <stdio.h>

int isDigit(int c);
int isAlpha(int c);
int isAlnum(int c);
int isLower(int c);
int isUpper(int c);
int isSpace(int c);
int isPunct(int c);
int isPrint(int c);
int isGraph(int c);
int toLower(int c);
int toUpper(int c);

int main(void) {
    int v;
    char array[2] = {'\0'};

    printf("Enter a character: ");
    scanf("%c", &array[0]);

    v = isDigit((int) array[0]);
    printf( "According to isDigit" );
    v == 0 ? printf( " %c is not a digit\n", array[ 0 ] ):
             printf( " %c is a digit\n", array[ 0 ] );

    v = isAlpha((int) array[0]);
    printf( "According to isAlpha" );
    v == 0 ? printf( " %c is not a letter\n", array[ 0 ] ):
             printf( " %c is a letter\n", array[ 0 ] );

    v = isAlnum((int) array[0]);
    printf( "According to isAlnum" );
    v == 0 ? printf( " %c is not a digit or a letter\n", array[ 0 ] ):
             printf( " %c is a digit or a letter\n", array[ 0 ] );

    v = isLower((int) array[0]);
    printf( "According to isLower" );
    v == 0 ? printf( " %c is not a lowercase letter\n", array[ 0 ] ):
             printf( " %c is a lowercase letter\n", array[ 0 ] );

    v = isUpper((int) array[0]);
    printf( "According to isUpper" );
    v == 0 ? printf( " %c is not a uppercase letter\n", array[ 0 ] ):
             printf( " %c is a uppercase letter\n", array[ 0 ] );

    v = isSpace((int) array[0]);
    printf( "According to isSpace" );
    v == 0 ? printf( " %c is not a white-space character\n", array[ 0 ] ):
             printf( " %c is a white-space character\n", array[ 0 ] );

    v = isPunct((int) array[0]);
    printf( "According to isPunct" );
    v == 0 ? printf( " %c is not a punctuation character\n", array[ 0 ] ):
             printf( " %c is a punctuation character\n", array[ 0 ] );

    v = isPrint((int) array[0]);
    printf( "According to isPrint" );
    v == 0 ? printf( " %c is not a printing character\n", array[ 0 ] ):
             printf( " %c is a printing character\n", array[ 0 ] );

    v = isGraph((int) array[0]);
    printf( "According to isGraph" );
    v == 0 ? printf( " %c is not a printing character other than space\n", array[ 0 ] ):
             printf( " %c is a printing character other than space\n", array[ 0 ] );

    v = toLower((int) array[0]);
    printf( "According to toLower" );
    v == 0 ? printf( " %c is unchanged\n", array[ 0 ] ):
             printf( " %c has been converted to lowercase\n", v );

    v = toUpper((int) array[0]);
    printf( "According to toUpper" );
    v == 0 ? printf( " %c is unchanged\n", array[ 0 ] ):
             printf( " %c has been converted to uppercase\n", v );
    
    return 0;
}

int isDigit(int c) {
    return ( c >= 48 && c <= 57 ) ? 1 : 0;
}

int isAlpha(int c) {
    return ( ( c >= 65 && c <= 90 ) || ( c >= 97 && c <= 122 ) ) ? 1 : 0;
}

int isAlnum(int c) {
    return ( isDigit( c ) == 1 || isAlpha( c ) == 1 ) ? 1 : 0;
}

int isLower(int c) {
    return ( c >= 97 && c <= 122 ) ? 1 : 0;
}

int isUpper(int c) {
    return ( c >= 65 && c <= 90 ) ? 1 : 0;
}

int isSpace(int c) {
    return ( ( c == 32 ) || ( c >= 9 && c <= 13 ) ) ? 1 : 0;
}

int isPunct(int c) {
    return ( isAlnum( c ) == 0 && isSpace( c ) == 0 ) ? 1 : 0;
}

int isPrint(int c) {
    return ( c >= 32 && c <= 126 ) ? 1 : 0;
}

int isGraph(int c) {
    return ( c >= 33 && c <= 126 ) ? 1 : 0;
}

int toLower(int c) {
    return ( isUpper( c ) == 1 ) ? c + 32 : c;
}

int toUpper(int c) {
    return ( isLower( c ) == 1 ) ? c - 32 : c;
}

