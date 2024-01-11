// Demonstrating the function-call stack
// and stack frames using a function square.
#include <stdio.h>

int square(int x);

int main(void) {
    int a = 10;
    
    printf("%d squared: %d\n", a, square(a));
    
    return 0;    
}

int square(int x) {
    return x * x;
}