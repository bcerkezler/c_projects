// The insertion sort algorithm.
#define SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
void insertionSort(int array[], size_t length);
void printPass(int array[], size_t length, int pass, size_t index);

int main(void) {
    int array[SIZE] = {0};

    srand(time(NULL));

    for (size_t i = 0; i < SIZE; i++) {
        array[i] = rand() % 90 + 10;
    }
    
    puts("Unsorted array:");

    for (size_t i = 0; i < SIZE; i++) {
        printf("%d  ", array[i]);
    }    

    puts("\n");
    insertionSort(array, SIZE);
    puts("Sorted array:");

    for (size_t i = 0; i < SIZE; i++) {
        printf("%d  ", array[i]);
    }

    puts("");       

    return 0;
}

void insertionSort(int array[], size_t length) {
    for (size_t i = 1; i < length; i++) {
        size_t moveItem = i;
        int insert = array[i];
        
        while (moveItem > 0 && array[moveItem - 1] > insert) {
            array[moveItem] = array[moveItem - 1];
            --moveItem;
        }
        
        array[moveItem] = insert;
        printPass(array, length, i, moveItem);
    }
}

void printPass(int array[], size_t length, int pass, size_t index) {
    printf("After pass %2d: ", pass);

    for (size_t i = 0; i < index; i++) {
        printf("%d  ", array[i]);
    }

    printf("%d* ", array[index]);

    for (size_t i = index + 1; i < length; i++) {
        printf("%d  ", array[i]);
    }

    printf("\n               ");

    for (size_t i = 0; i <= pass; i++) {
        printf("--  ");
    }   

    puts("");          
}
