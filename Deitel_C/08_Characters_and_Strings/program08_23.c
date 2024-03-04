// Strings Starting with "b"
#include <stdio.h>

int main(void) {
    int i;
    char array[5][20];

    for (i = 0; i <= 4; i++) {
        printf("Enter a string: ");
        scanf("%s", &array[i][0]);
    }
    
    printf( "\nThe strings starting with 'b' are:\n" );

    for (i = 0; i <= 4; i++) {
        if (array[i][0] == 'b') {
            printf("%s\n", &array[i][0]);
        }
    }

    return 0;
}

