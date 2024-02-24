// Dynamic Array Allocation
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    array = (int *) malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    printf("\nThe array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }    
    printf("\n");

    array = realloc(array, (size/2) * sizeof(int));

    printf("\nThe reallocated array is: ");
    for (int i = 0; i < size/2; i++) {
        printf("%d ", array[i]);
    }    
    printf("\n");

    return 0;
}