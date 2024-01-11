#include <stdio.h>


int main() {
    int x, N, num, denom = 1, i;
    float sum;

    printf("x ve N degerlerini giriniz: ");
    scanf("%d %d", &x, &N);
    num = x;

    for (i = 2; i <= N; i++) {
        num *= x;
        denom *= i;
        if (i == 2) {
            sum += ((float)num/denom);
        }
        else {
            sum -= ((float)num/denom);
        }
    }
    printf("Cos(%d) = %.4f", x, 1-sum);
    
}