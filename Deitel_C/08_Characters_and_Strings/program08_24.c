// Strings Starting with "b"
#include <stdio.h>
#include <string.h>

int main(void) {
    int i;
    int length;
    char array[5][20];

    for (i = 0; i <= 4; i++) {
        printf("Enter a string: ");
        scanf("%s", &array[i][0]);
    }
    
    printf( "\nThe strings ending with \"ED\" are:\n" );

    for (i = 0; i <= 4; i++) {
       length = strlen(&array[i][0]);

        if (strcmp(&array[i][length-2] ,"ED") == 0) {
            printf("%s\n", &array[i][0]);
        }
    }

    return 0;
}

