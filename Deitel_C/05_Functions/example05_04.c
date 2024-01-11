// Shifted, scaled random integers produced by 1 + rand() % 6.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    for (int i = 1; i <= 10; ++i) {
        printf("%d ", 1 + (rand() % 6));
    }
    puts("");
    
}