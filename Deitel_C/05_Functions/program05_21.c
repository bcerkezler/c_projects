// Project: Drawing Shapes with Characters
#include <stdio.h>

void square(int height, char fillCharacter);
void rectangle(int height, int width, char fillCharacter);
void triangle(int height, char fillCharacter);

int main(void) {
   
    int height, width;
    char fillCharacter, choice;
    
    printf("\n-- Square = S, Rectangle = R, Triangle = T --");
    printf("\nChoose the shape to be displayed: ");
    choice = getchar();
    getchar();
    
    printf("Enter the character to be printed: ");
    fillCharacter = getchar();
    
    switch (choice) {
        case 'S':
                printf("Enter the height of the square: ");
                scanf("%d", &height);
                puts("");
                square(height, fillCharacter);
                break;
        case 'R':
                printf("Enter the height and width of the rectangle: ");
                scanf("%d%d", &height, &width);
                puts("");
                rectangle(height, width, fillCharacter); 
                break;
        case 'T': 
                printf("Enter the height of the triangle: ");
                scanf("%d", &height);
                puts("");
                triangle(height, fillCharacter);
                break;
        default: 
                printf("Wrong choice!\n");
                break;
    }

    puts("");

    return 0;
}


void square(int height, char fillCharacter) {
    int i, j;

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= height; j++) {
            printf("%c", fillCharacter);
        }
        puts("");
    }
}

void rectangle(int height, int width, char fillCharacter) {
    int i, j;

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= width; j++) {
            printf("%c", fillCharacter);
        }
        puts("");
    }
}

void triangle(int height, char fillCharacter) {
    int i, j, count = 1;

    for (i = height; i >= 1; i--) {
        for (j = 1; j <= i-1; j++) {
            printf(" ");
        }
        for (j = 1; j <= count; j++) {
            printf("%c", fillCharacter);
        }
        for (j = 1; j <= i-1; j++) {
            printf(" ");
        }

        count += 2;
        puts("");
    }
}