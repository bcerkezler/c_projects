// Differences Between %d and %i
#include <stdio.h>

int main(void) {
    int x, y;

    printf("Enter two integers: ");
    scanf("%i%d", &x, &y);
    printf("%d %d\n", x, y);

    return 0;
}