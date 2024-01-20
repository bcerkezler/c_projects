// Using the p and % conversion specifiers
#include <stdio.h>

void cubeByReference(int *nPtr); // function prototype

int main(void) {
    int x = 12345;
    int *ptr = &x; 
    
    printf("The value of ptr is %p", ptr);
    printf("\nThe address of x is %p\n\n", &x);

    printf("Printing a %% in a format control string\n");

    return 0;
}

