// Totaling an Array’s Contents
#include <stdio.h>

#define SUMARRAY(array, n) for (i = 0; i < n; i++) { \
                                total += array[i]; }    

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i, total = 0;
    

    SUMARRAY(array, 10)
    printf("The sum is %d", total);
    
    return 0;
}