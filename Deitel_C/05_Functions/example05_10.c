// Recursive fibonacci function.
#include <stdio.h>

unsigned long long int fibonacci(int n); // function prototype

int main(void) {
    // calculate and display fibonacci(number) for 0-10
    for (int number = 0; number <= 10; number++) {
        printf("Fibonacci(%d) = %llu\n", number, fibonacci(number));
    }
}

/// Recursive definition of function fibonacci
unsigned long long int fibonacci(int n) {
    if (n == 0 || n == 1) { // base case
        return n;
    }
    else { // recursive step
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    
}