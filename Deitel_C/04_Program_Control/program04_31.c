// Exercise 4.31
// Diamond-Printing Program
#include <stdio.h>

int main() { 
    
    int i, j, s;
    
    puts("");

    for (i = 4, s = 1; i >= 0; i--, s += 2) {
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

     for (i = 1, s = 7; i <= 4; i++, s -= 2) {
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