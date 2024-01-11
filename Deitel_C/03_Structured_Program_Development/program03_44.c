// Exercise 3.44
// Sides of a Right Triangle
#include <stdio.h>

int main(void) {
    
    int x, y, z;
    int choice;

    printf("Right Traingle or Not! (Continue = 1, Exit = 0): ");
    scanf("%d", &choice);

    
    while (choice != 0){
        printf("\nEnter 3 nonzero integer values: ");
        scanf("%d%d%d", &x, &y, &z);
        
        if ((x * x) + (y * y) == (z * z))
            puts("It's a right triangle.");
        else if ((x * x) + (z * z)  == (y * y))
            puts("It's a right triangle.");
        else if ((y * y) + (z * z) == (x * x))
            puts("It's a right triangle.");
        else 
            puts("It's not a right triangle.");
        
        printf("\nRight Traingle or Not! (Continue = 1, Exit = 0): ");
        scanf("%d", &choice);
    }

    return 0;
}   