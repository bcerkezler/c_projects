// Converting Strings to Integers for Calculations
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    long total;
    char snum1[20], snum2[20], snum3[20], snum4[20];
    char *remainderPtr;

    printf("Enter four strings as integers to sum: \n");
    scanf("%s%s%s%s", snum1, snum2, snum3, snum4);

    total = strtol(snum1, &remainderPtr, 0) + strtol(snum2, &remainderPtr, 0)
          + strtol(snum3, &remainderPtr, 0) + strtol(snum4, &remainderPtr, 0);

    printf("Sum is %ld", total);

    return 0;
}