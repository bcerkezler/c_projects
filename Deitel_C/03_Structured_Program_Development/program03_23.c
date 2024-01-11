// Exercise 3.23
// Find the Largest Number
#include <stdio.h>

int main(void) {
    
    int counter = 1;
    int number;
    int largest = 0;

    while (counter <= 10) {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > largest)
            largest = number;
        counter++;
    }
    
    printf("\nLargest number is %d", largest);



    return 0;
}   