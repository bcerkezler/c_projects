// Square of Asterisks
#include <stdio.h>

void display(int side);

int main(void) {
   
    int side;
    
    printf("\nEnter the side of the square: ");
    scanf("%d", &side);
    
    puts("");
    display(side);

    return 0;
}


void display(int side) {
    int i, j;

    for (i = 1; i <= side; i++) {
        for (j = 1; j <= side; j++) {
            printf("*");
        }
        puts("");
    }
}