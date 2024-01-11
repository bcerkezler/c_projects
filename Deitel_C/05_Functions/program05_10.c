// Rounding Numbers
#include <stdio.h>
#include <math.h>

int main(void) {
    double x;
    int y;
    int first = 1;
    
    printf("Enter 5 numbers to be rounded:\n");
    
    for (int i = 1; i <= 5; i++) {
        scanf("%lf", &x);
        if (first == 1) {
            puts("");
            first = 0;
        }
        y = floor(x + .5);
        printf("%.2f   %2d\n", x, y);
    }

    return 0;
}


