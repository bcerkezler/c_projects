#include <stdio.h>

int main() {

    int i, n;
    double fact = 1.0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = n; i > 1; i--) {
        fact *= i;
    }

    printf("Factorial of %d: %.2lf\n", n, fact);

    return 0;
}

/*
   (a) = 7
   (b) = 13
   (c) = 20
   (d) = 20
   (e) = 34
   (f) = 170
   (g) = 1754
*/
