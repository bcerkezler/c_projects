// Displaying a Square of Any Character
#include <stdio.h>

void display(int side, char fillCharacter);

int main(void) {
   
    int side;
    char fillCharacter;
    
    printf("\nEnter the side of the square: ");
    scanf("%d", &side);
    getchar();

    printf("Enter the character to be printed: ");
    fillCharacter = getchar();
    
    puts("");
    display(side, fillCharacter);

    return 0;
}


void display(int side, char fillCharacter) {
    int i, j;

    for (i = 1; i <= side; i++) {
        for (j = 1; j <= side; j++) {
            printf("%c", fillCharacter);
        }
        puts("");
    }
}