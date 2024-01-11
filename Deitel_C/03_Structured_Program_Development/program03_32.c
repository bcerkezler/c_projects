// Exercise 3.32
// Square of Asterisks
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
            printf("* ");
            j--;
        }
        puts("");
        i--;
    }
    

    return 0;
}   