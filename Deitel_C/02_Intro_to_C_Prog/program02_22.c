// Exercise 2.22
// Odd or Even
#include <stdio.h>

int main() {
    
    int integer;

    printf("Enter a number: ");
    scanf("%d", &integer);

    if (integer % 2 == 0) { puts("Even"); }
    if (integer % 2 != 0) { puts("Odd"); }

    return 0;
}