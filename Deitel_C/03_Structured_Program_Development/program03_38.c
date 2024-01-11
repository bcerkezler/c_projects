// Exercise 3.38
// Counting 7s
#include <stdio.h>

int main(void) {
    
    int number;
    int counter = 0;

    printf("Enter an integer (-1 to exit): ");
    scanf("%d", &number);

    while (number != -1) {
    
        while (number != 0) {
        
            if (number % 10 == 7) {
                counter++;
            }
        
            number /= 10;
        }
    
    printf("Number of 7s: %d\n\n", counter);
    counter = 0;

    printf("Enter an integer (-1 to exit): ");
    scanf("%d", &number);
    }

    return 0;
}   