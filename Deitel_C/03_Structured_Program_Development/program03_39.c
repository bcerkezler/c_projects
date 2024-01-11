// Exercise 3.39
// Checkerboard Pattern of Asterisks
#include <stdio.h>

int main(void) {

    int choice;
    int i = 8, j = 16;

    printf("Write checkerboard (Yes = 1,No = 0): ");
    scanf("%d", &choice);
    
    while (choice != 0) {
        while (i > 0) {
            if (i % 2 == 0)
                while (j > 0) {
                    if (j % 2 == 0) {
                        printf("*");
                    }
                    else {
                        printf(" ");
                    }
                    j--;
                }
                else {
                    while (j > 0) {
                        if (j % 2 == 1) {
                            printf("*");
                        }
                        else {
                            printf(" ");
                        }
                        j--;
                    }
                }
            i--;
            j = 16;
            puts("");
        }
        
        i = 8;
        
        printf("\n\nWrite checkerboard (Yes = 1,No = 0): ");
        scanf("%d", &choice);
    }


    return 0;
}   