// Exercise 3.25
// Tabular Output
#include <stdio.h>

int main(void) {
    
    int i = 3;

    printf("A\tA+2\tA+4\tA+6\n\n");

    while (i <= 15) {
        printf("%d\t", i);
        printf("%d\t", i + 2);
        printf("%d\t", i + 4);
        printf("%d\n", i + 6);
        i += 3;
    }
    
    return 0;
}   