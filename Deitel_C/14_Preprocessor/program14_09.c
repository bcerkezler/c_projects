// Printing an Array
#include <stdio.h>

#define PRINTARRAY(array, n) for (i = 0; i < n; i++) { \
                                printf("%d ", array[i]); }    

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i;
    

    printf("The array is ");
    PRINTARRAY(array, 10)
    
    return 0;
}