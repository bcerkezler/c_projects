// Exercise 2.18
// Comparing integers
#include <stdio.h>

int main() {
    
    int int1, int2;

    puts("Enter two integers:");
    scanf("%d%d", &int1, &int2);

    if (int1 > int2) { printf("%d is larger.\n", int1); }
    if (int1 < int2) { printf("%d is larger.\n", int2); }
    if (int1 == int2) { puts("These numbers are equal."); }

    return 0;
}