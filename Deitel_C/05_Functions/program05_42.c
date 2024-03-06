#include <stdio.h>

int main(void) {
    int c = '\0'; // variable to hold character input by user
    
    if ((c = getchar()) != EOF) {
        main();
        printf("%c", c);
    }
}