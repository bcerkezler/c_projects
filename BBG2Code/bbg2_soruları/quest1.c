#include <stdio.h>
#define LEN 100

int main() {
    int N, i, j, mtr[LEN][LEN];
    
    printf("N sayisini girin: ");
    scanf("%d", &N);

    mtr[0][0] = 1;
    for (i = 1; i < N; i++) {
        mtr[i][i] = 1;
    }

    for (i = 1; i < N; i++) {
        for (j = 0; j < i; j++){
            if (j == 0) {
                mtr[i][j] = 1;
                mtr[i+1][j+1] = mtr[i][j] + mtr[i][j+1];
            }
            else {
                mtr[i+1][j+1] = mtr[i][j] + mtr[i][j+1];
            }   
        } 
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++){
            printf("%d ", mtr[i][j]);
        }
        printf("\n"); 
    }
    
    return 0;
    
}