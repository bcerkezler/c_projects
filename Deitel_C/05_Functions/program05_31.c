// Coin Tossing
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(void);

int main(void) {
    int i;
    int headsCount = 0;
    int tailsCount = 0;

    srand(time(NULL));

    printf("--A coin is gonna get flipped 100 times--\n\n");
          
    for (i = 1; i <= 100; i++) {
        if (flip()) {
            puts("Heads");
            headsCount++;
        }
        else {
            puts("Tails");
            tailsCount++;
        }
    }

    printf("Heads = %d || Tails = %d", headsCount, tailsCount);
    
    
    return 0;
}

int flip(void) {
    int result;
    
    result = rand() % 2;
    
    return result;
}