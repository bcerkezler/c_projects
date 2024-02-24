// Smallest of Three Numbers
#include <stdio.h>

#define MINIMUM2(x, y) (((x) < (y)) ? (x) : (y))
#define MINIMUM3(x, y, z) (((MINIMUM2(x, y)) < (z)) ? (MINIMUM2(x, y)) : (z)) 

int main() {
    int x, y, z;
    
    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);

    printf("The smallest one is %d.", MINIMUM3(x, y, z));
    
    return 0;
}