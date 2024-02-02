// The selection sort algorithm.
#define SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
void selectionSort(int array[], size_t length);
void swap(int array[], size_t first, size_t second);
void printPass(int array[], size_t length, int pass, size_t index);

int main(void) {
    int array[SIZE] = {0};

    srand(time(NULL));

    for (size_t i = 0; i < SIZE; i++) {
        array[i] = rand() % 90 + 10;
    }
    
    puts("Unsorted array:");

    for (size_t i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }    

    puts("\n");
    selectionSort(array, SIZE);
    puts("Sorted array:");

    for (size_t i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }

    puts("");       

    return 0;
}

void selectionSort(int array[], size_t length) {
    for (size_t i = 0; i < length - 1; i++) {
        size_t smallest = i;

        for (size_t j = i + 1; j < length; j++) {
            if (array[j] < array[smallest]) {
                smallest = j;
            }
        }
        
        swap(array, i, smallest);
        printPass(array, length, i + 1, smallest);
    }
}

void swap(int array[], size_t first, size_t second) {
    int temp = array[first];
    array[first] = array[second];
    array[second] = temp;
}

void printPass(int array[], size_t length, int pass, size_t index) {
    printf("After pass %2d: ", pass);

    for (size_t i = 0; i < index; i++) {
        printf("%d ", array[i]);
    }

    printf("%d* ", array[index]);

    for (size_t i = index + 1; i < length; i++) {
        printf("%d ", array[i]);
    }

    printf("\n               ");

    for (int i = 0; i < pass; i++) {
        printf("-- ");
    }   

    puts("");          
}
