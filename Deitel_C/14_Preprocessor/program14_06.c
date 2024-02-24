// Smaller of Two Numbers
#include <stdio.h>

#define MINIMUM2(x, y) (((x) < (y)) ? (x) : (y))

int main() {
    int x, y;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("The smaller one is %d.", MINIMUM2(x, y));
    
    return 0;
}