// Exercise 4.39
// Limitations of Floating-Point Numbers for Monetary Amounts
#include <stdio.h>

int main() {
    float var = 1000000.00;

    var += 0.12f;

    printf("%.2f", var);

    return 0;
}