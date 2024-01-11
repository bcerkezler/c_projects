#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, i, max = 0, diff, ind;
    int *dizi;

    printf("Dizinin eleman sayisini girin: ");
    scanf("%d", &N);

    dizi = (int *) malloc(N * sizeof(int));
    
    printf("Dizinin elemanlarini giriniz: ");
    for (i = 0; i < N; i++) {
        printf("dizi[%d]: ", i);
        scanf("%d", &dizi[i]);  
    }
    
    for (i = 0; i < N-1; i++) {
        diff = abs(dizi[i] - dizi[i+1]);
        if (diff > max) {
            max = diff;
            ind = i;
        }           
    }
    
    printf("Ardisik en buyuk mutlak fark %d | %d. ve %d. indisler arasinda.", max, ind, ind+1);
    free(dizi);
    
    return 0;
}