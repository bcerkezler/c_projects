// Exercise 3.29
// Print the Given Program
#include <stdio.h>

int main(void) {
    
    int row = 10;

    while (row >= 1) {
        int column = 1;

        while (column <= 10) {
            printf("%s", (row % 2) ? "<" : ">");
            ++column;
        }

        --row;
        puts("");
    }

    return 0;
}   