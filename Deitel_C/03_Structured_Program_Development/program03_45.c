// Exercise 3.45
// Factorial
#include <stdio.h>

int main(void) {
    
    int x, temp_x;
    int fact = 1, pow = 1;
    float e = 1, ex = 1;
    int i = 1, j;

    printf("Enter a non-negative integer: ");
    scanf("%d", &x);

    temp_x = x;

    if (temp_x == 0)
        fact = 1;
    else
    {
        while (temp_x > 0) {
            fact *= temp_x;
            temp_x--;
        } 
    }
    printf("\n%d! is %d\n", x, fact);

    
    while (i <= 5) {
        
        fact = 1;
        j = i;
        
        while (j > 0) {
            fact *= j;
            j--;
        }
        
        e += ((float) 1 / fact);
        i++;
    
    }
    printf("Value of e is: %.3f\n", e);

    i = 1;
    while (i <= 5) {
        
        fact = 1;
        j = i;
        
        while (j > 0) {
            fact *= j;
            j--;
        }
        
        j = i;
        
        while (j > 0) {
            pow *= x;
            j--;
        }
        
        ex += ((float) pow / fact);
        pow = 1;
        i++;
    
    }
    printf("Value of e^%d is: %.3f\n", x, ex);

    return 0;
}   