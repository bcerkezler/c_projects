// Exercise 2.23
// Multiples
#include <stdio.h>

int main() {
    
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 % num2 == 0) { puts("Multiple"); }
    if (num1 % num2 != 0) { puts("Not"); }

    return 0;
}