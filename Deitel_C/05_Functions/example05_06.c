// Randomizing the die-rolling program.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("%s", "Enter seed: ");
    int seed = 0;
    scanf("%d", &seed);

    srand(seed);

    for (int i = 1; i <= 10; ++i) {
        printf("%d ", 1 + (rand() % 6));
    }
    puts("");

}