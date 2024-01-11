// Exercise 3.24
// Tabular Output
#include <stdio.h>

int main(void) {
    
    int i = 1;
    
    printf("N\t10*N\t100*N\t1000*N\n\n");
    
    while (i <= 10) {
        printf("%d\t", i);
        printf("%d\t", 10 * i);
        printf("%d\t", 100 * i);
        printf("%d\n", 1000 * i);
        i++;
    }
    
    return 0;
}   