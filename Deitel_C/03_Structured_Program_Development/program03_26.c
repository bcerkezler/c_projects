// Exercise 3.26
// Find the Two Largest Number
#include <stdio.h>

int main(void) {
    
    int counter = 1;
    int number;
    int largest = 0;
    int sec_largest = 0;

    while (counter <= 10) {
        printf("Enter a number: ");
        scanf("%d", &number);
        
        if (number >= largest) {
            sec_largest = largest;
            largest = number;
        }
        else if(number >= sec_largest)
            sec_largest = number;

        counter++;
    }
    
    printf("\nLargest number is %d", largest);
    printf("\nSecond largest number is %d", sec_largest);

    return 0;
}  