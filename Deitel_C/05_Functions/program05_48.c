// Research Project: Improving the Recursive Fibonacci Implementation
#include <stdio.h>

unsigned long long int fibonacci_tail(int n, unsigned long long int a, unsigned long long int b);

int main(void) {
    // calculate and display fibonacci(number) for 0-10
    for (int number = 0; number <= 10; number++) {
        printf("Fibonacci(%d) = %llu\n", number, fibonacci_tail(number, 0, 1));
    }
    return 0;
}

/// Tail recursive definition of function fibonacci
unsigned long long int fibonacci_tail(int n, unsigned long long int a, unsigned long long int b) {
    if (n == 0) { // base case
        return a;
    }
    else if (n == 1) { // base case
        return b;
    }
    else { // recursive step
        return fibonacci_tail(n - 1, b, a + b);
    }
}
