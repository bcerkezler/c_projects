// Exercise 2.19
// Arithmethic, Largest Value and Smallest Value
#include <stdio.h>

int main() {
    
    int int1, int2, int3,
        i1, i2, i3;
    i1 = i2 = i3 = 2;

    printf("Enter three different integers: ");
    scanf("%d%d%d", &int1, &int2, &int3);

    printf("Sum is %d\n", int1 + int2 + int3);
    printf("Average is %d\n", (int1 + int2 + int3) / 3);
    printf("Product is %d\n", int1 * int2 * int3);
    
   if (int1 < int2) {
       if (int1 < int3) { printf("Smallest is %d\n", int1); }
       if (int3 <= int1) { printf("Smallest is %d\n", int3); }
       if (int2 < int3) { printf("Largest is %d\n", int3); }
       if (int3 <= int2) { printf("Largest is %d\n", int2); }    
    }
    
    if (int2 <= int1) {
       if (int2 < int3) { printf("Smallest is %d\n", int2); }
       if (int3 <= int2) { printf("Smallest is %d\n", int3); }
       if (int1 < int3) { printf("Largest is %d\n", int3); }
       if (int3 <= int1) { printf("Largest is %d\n", int1); }  
    }

    return 0;
}