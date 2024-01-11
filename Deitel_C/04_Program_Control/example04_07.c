// Using the break statement in a for statement.
#include <stdio.h>

int main() {
    int x = 1;
    
    for (; x <= 10; ++x) {
        if (x == 5) { break; }
        printf("%d ", x);
    }

    printf("\nBroke out of a loop at x == %d\n", x);
}