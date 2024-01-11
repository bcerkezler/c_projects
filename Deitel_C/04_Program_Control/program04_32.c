// Exercise 4.32
// Modified Diamond-Printing Program
#include <stdio.h>

int main() { 
    
    int i, j, s, rows;

    printf("Enter an odd number of rows (1-19): ");
    scanf("%d", &rows);
    
    puts("");

    for (i = (rows/2), s = 1; i >= 0; i--, s += 2) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        for (j = 1; j <= s; j++) {
            printf("*");
        }
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        puts("");
    }

     for (i = 1, s = (rows-2); i <= (rows/2); i++, s -= 2) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        for (j = 1; j <= s; j++) {
            printf("*");
        }
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        puts("");
    }
    
    puts("");
    
    return 0;
}