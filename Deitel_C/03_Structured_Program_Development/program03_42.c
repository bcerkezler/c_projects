// Exercise 3.42
// What is wrong?
#include <stdio.h>

int main(void) {
    
    int x, y;
    x = 1, y = 2; 

    printf("%d", (++x) + (++y));

    return 0;
}   