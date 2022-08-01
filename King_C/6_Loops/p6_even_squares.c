#include <stdio.h>

int main() {

    int num, d = 1, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        square = d * d;
        if (square % 2 == 0)
            printf("%d\n", square);
        d++;
    } while((d * d) <= num);

    return 0;
}

