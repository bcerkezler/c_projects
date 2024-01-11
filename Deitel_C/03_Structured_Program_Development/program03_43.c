// Exercise 3.43
// Sides of a Triangle
#include <stdio.h>
#include <math.h>

int main(void) {
    
    int x, y, z;
    int choice;

    printf("Traingle or Not! (Continue = 1, Exit = 0): ");
    scanf("%d", &choice);

    
    while (choice != 0){
        printf("\nEnter 3 nonzero integer values: ");
        scanf("%d%d%d", &x, &y, &z);
        
        if (fabs(y-z) < x && (y+z) > x)
            puts("It's a triangle.");
        else 
            puts("It's not a triangle.");
        
        
        printf("\nTraingle or Not! (Continue = 1, Exit = 0): ");
        scanf("%d", &choice);
    }

    return 0;
}   