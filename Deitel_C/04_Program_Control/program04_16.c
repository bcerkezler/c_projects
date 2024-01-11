// Exercise 4.15
// Triangle-Printing Program
#include <stdio.h>

int main() {
    
    printf("\n(A)\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        puts("");
    }
    puts("");
    

    printf("(B)\n");
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        puts("");
    }
    puts("");
    
    
    printf("(C)\n");
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= (10-i); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        puts("");
    }
    puts("");
    
    
    printf("(D)\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= (10-i); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        puts("");
    }
    puts("");
    

    return 0;
}