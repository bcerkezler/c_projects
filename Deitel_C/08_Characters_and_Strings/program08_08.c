// Converting Strings to Floating Point for Calculations
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    double total = 0.0;
    char snum1[20], snum2[20], snum3[20], snum4[20];
    char *remainderPtr;

    printf("Enter four strings as floating-point values to sum: \n");
    scanf("%s%s%s%s", snum1, snum2, snum3, snum4);

    total = strtod(snum1, &remainderPtr) + strtod(snum2, &remainderPtr)
          + strtod(snum3, &remainderPtr) + strtod(snum4, &remainderPtr);

    printf("Sum is %.3lf", total);

    return 0;
}