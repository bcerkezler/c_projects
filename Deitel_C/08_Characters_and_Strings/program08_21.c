// Alphabetizing a List of Strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 15

void stringSort(char *towns[], size_t length);
void swap(char *towns[], size_t first, size_t second);

int main(void) {
    char *towns[SIZE] = {"Manisa", "Izmir", "Aydin", "Mugla", "Balikesir",
                         "Usak", "Afyon", "Denizli", "Kutahya", "Eskisehir",
                         "Canakkale", "Bursa", "Yalova", "Bilecik", "Ankara"};

    
    puts("Unsorted array:");

    for (int i = 0; i < SIZE; i++) {
        printf("%s ", towns[i]);
    }    
    
    puts("\n");
    stringSort(towns, SIZE);
    puts("Sorted array:");

    for (int i = 0; i < SIZE; i++) {
        if (towns[i] != NULL) {
            printf("%s ", towns[i]);
        }
    }

    puts("");       

    return 0;
}

void stringSort(char *towns[], size_t length) {
    for (int i = 0; i < length - 1; i++) {
        int smallest = i;

        for (int j = i + 1; j < length; j++) {
            if (strcmp(towns[j], towns[smallest]) < 0) {
                smallest = j;
            }
        }
        
        if (smallest != i) {
            swap(towns, i, smallest);
        }
    }
}

void swap(char *towns[], size_t first, size_t second) {
    char *temp = towns[first];
    towns[first] = towns[second];
    towns[second] = temp;
}

