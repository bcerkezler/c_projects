// Recursive Exponentiation
#include <stdio.h>
#include <limits.h>

unsigned long long int fibonacci(int n);

int main(void) {
    
    int n = 1;

    puts("Fibonacci series: ");
    while (n <= 100) {
        printf("%llu\n", fibonacci(n));
        n++;
    }
    
    return 0;

}

unsigned long long int fibonacci(int n) {
    
    int i;
    unsigned long long int sum = 1, lastSum = 1, tmp;
    
    if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    else {
        for (i = 3; i < n; i++) {
            tmp = sum;
            sum += lastSum;
            lastSum = tmp;
        }
        return sum;
    }

}