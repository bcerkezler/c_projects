#include <stdio.h>
#include <stdlib.h>

typedef struct entry {
    char *userName;
    int deleted;
} Entry;


int main() {
    
    int maxElements, tableLength, elementCount = 0, exitFlag = 0;
    Entry *hashTable;
    float loadFactor;
    char modeSelect;

    printf("Algoritma Analizi 3.Odev -- Hashing \n");

   /* printf("Tabloya eklenebilecek kayit sayisini giriniz: ");
    scanf("%d", &maxElements);
    printf("Load factor degerini giriniz: ");
    scanf("%f", &loadFactor);
     tableLength = maxElements / loadFactor;
    while (!isPrime(tableLength)) {
        tableLength++;
    }
    hashTable = (Entry*) malloc(tableLength * sizeof(Entry)); */

    while(1) {
        printf("\nNORMAL mod icin 'N', DEBUG modu icin 'D', cikis yapmak icin 'E' tusunu giriniz.\n");
        switch(modeSelect = getchar()) {
            case 'N': 
                while (exitFlag == 0) {
                    printf("\n-- Kayit eklemek icin 1, Kayit silmek icin 2, Kayit aramak icin 3 --\n");
                    printf("-- Tabloyu yazdirmak icin 4, Rehashing icin 5, Mod secimine donmek icin 0 tusuna basiniz --\n");
                    printf("\nYapmak istediginiz islemi seciniz:\n");
                    exitFlag = 1;+
                }
                return 0;
            case 'D': 
            case 'E': free(hashTable);  printf("Cikis yapiliyor...\n"); return 0;
        }
    }

}