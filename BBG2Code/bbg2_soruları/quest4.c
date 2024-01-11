#include <stdio.h>
#define LEN 100

int main() {
    int mtr[LEN][LEN], i, j, N, sum = 0;

    printf("N sayisini gir: ");
    scanf("%d", &N);
    printf("Matrisin elemanlarini girin: \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("mtr[%d][%d]: ", i, j);
            scanf("%d", &mtr[i][j]);
        } 
    }

    for (i = 0; i < N; i ++) {
        if (i % 2 == 0) {
            for (j = 0; j < N; j += 2) {
                sum += mtr[i][j];        
            }
        } 
        else {
            for (j = 1; j < N; j += 2) {
                sum += mtr[i][j];
            }
        }
    }

    printf("Isaretli hucrelerin toplami: %d", sum);
    
    
    return 0;
}