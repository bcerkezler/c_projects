// The merge sort algorithm.
#define SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
void mergeSort(int array[], size_t length);
void sortSubArray(int array[], size_t low, size_t high);
void merge(int array[], size_t left, size_t middle1, size_t middle2, size_t right);
void displayElements(int array[], size_t length);
void displaySubArray(int array[], size_t left, size_t right);

int main(void) {
    int array[SIZE] = {0};

    srand(time(NULL));

    for (size_t i = 0; i < SIZE; i++) {
        array[i] = rand() % 90 + 10;
    }
    
    puts("Unsorted array:");
    displayElements(array, SIZE);
    puts("\n");
    mergeSort(array, SIZE);
    puts("Sorted array:");
    displayElements(array, SIZE);
    puts("");       

    return 0;
}

void mergeSort(int array[], size_t length) {
    sortSubArray(array, 0, length-1);
}

void sortSubArray(int array[], size_t low, size_t high) {
    if ((high - low) >= 1) {
        size_t middle1 = (low + high) / 2;
        size_t middle2 = middle1 + 1;

        printf("split:   ");
        displaySubArray(array, low, high);
        printf("\n         ");
        displaySubArray(array, low, middle1);
        printf("\n         ");
        displaySubArray(array, middle2, high);
        puts("\n");

        sortSubArray(array, low, middle1);
        sortSubArray(array, middle2, high);

        merge(array, low, middle1, middle2, high);
    }
}

void merge(int array[], size_t left, size_t middle1, size_t middle2, size_t right) {
    size_t leftIndex = left;
    size_t rightIndex = middle2;
    size_t combinedIndex = left;
    int tempArray[SIZE] = {0};

    printf("merge:   ");
    displaySubArray(array, left, middle1);
    printf("\n         ");
    displaySubArray(array, middle2, right);
    puts("");

    while (leftIndex <= middle1 && rightIndex <= right) {
        if (array[leftIndex] <= array[rightIndex]) {
            tempArray[combinedIndex++] = array[leftIndex++];
        }
        else {
            tempArray[combinedIndex++] = array[rightIndex++];
        }
    }

    if (leftIndex == middle2) {
        while (rightIndex <= right) {
            tempArray[combinedIndex++] = array[rightIndex++];
        }
    }
    else {
        while (leftIndex <= middle1) {
            tempArray[combinedIndex++] = array[leftIndex++];
        }        
    }
    
    for (size_t i = left; i <= right; i++) {
        array[i] = tempArray[i];
    }
    
    printf("         ");
    displaySubArray(array, left, right);
    puts("\n");    
}

void displayElements(int array[], size_t length) {
    displaySubArray(array, 0, length-1);
}

void displaySubArray(int array[], size_t left, size_t right) {
    for (size_t i = 0; i < left; i++) {
        printf("   ");
    }

    for (size_t i = left; i <= right; i++) {
        printf(" %d", array[i]);
    }        
}