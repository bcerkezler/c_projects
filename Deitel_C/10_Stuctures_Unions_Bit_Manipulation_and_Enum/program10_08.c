// Using Unions
#include <stdio.h>

union integer {
    char c;
    short s;
    int i;
    long b;
};

int main(void) {
    
    union integer test;
    
    printf("Enter a char: ");
    scanf("%c", &test.c);
    printf("%c\n\n", test.c);

    printf("Enter a short int: ");
    scanf("%hd", &test.s);
    printf("%hd\n\n", test.s);

    printf("Enter an int: ");
    scanf("%d", &test.i);
    printf("%d\n\n", test.i);

    printf("Enter a long int: ");
    scanf("%ld", &test.b);
    printf("%ld\n\n", test.b);

    return 0;
}