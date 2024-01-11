// Exercise 2.26
// Seperating Digits in an Integer
#include <stdio.h>

int main() {
    
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d   ", num / 10000 % 10);
    printf("%d   ", num / 1000 % 10);
    printf("%d   ", num / 100 % 10);
    printf("%d   ", num / 10 % 10);
    printf("%d   ", num % 10);
    
    

    return 0;
}