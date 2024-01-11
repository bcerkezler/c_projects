// Remove the break
#include <stdio.h>

int main() {
    int x = 1, flag = 0;
    
    for (; x <= 10, flag == 0; ++x) {
        if (x == 5) { 
            flag = 1; 
        }
        else {
            printf("%d ", x);
        }
    }

    printf("\nBroke out of a loop at x == %d\n", --x);
}