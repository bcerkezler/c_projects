// Finding the maximum of three integers.
#include <stdio.h>

int maximum(int x, int y, int z);

int main(void) {

    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

    printf("Enter three integers: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    printf("Maximum is: %d\n", maximum(number1, number2, number3));
    
    return 0;    
}

int maximum(int x, int y, int z) {
    int max = x;

    if (y > max) {
        max = y;
    }

    if (z > max) {
        max = z;
    }

    return max;
}