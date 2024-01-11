// Exercise 3.30
// Dangling-Else Problem
#include <stdio.h>

int main(void) {
    
    int x, y, i = 1;

    x = 9; y = 11;
    while (i <= 2) {
        if (x < 10)
        if (y > 10)
        puts("*****");
        else
        puts("#####");
        puts("$$$$$");
        i++;
        x = 11; y = 9;
    }

    x = 9; y = 11;
    i = 1;
    while (i <= 2) {
        if (x < 10) {
        if (y > 10)
        puts("*****");
        }
        else {
        puts("#####");
        puts("$$$$$");
        }
        i++;
        x = 11; y = 9;
    }


    return 0;
}   