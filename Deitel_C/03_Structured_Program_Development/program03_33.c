// Exercise 3.33
// Hollow Square of Asterisks
#include <stdio.h>

int main(void) {

    int side, i , j;    

    printf("Enter the side size of the square: ");
    scanf("%d", &side);

    i = side;
    while (i >= 1)
    {
        j = side;
        while (j >= 1)
        {
            if (i != 1 && i != side) {
                if (j != 1 && j != side)
                    printf("  ");
                else 
                    printf("* ");
            }
            else {
                printf("* ");
            }
                
            j--;
        }
        puts("");
        i--;
    }

    return 0;
}