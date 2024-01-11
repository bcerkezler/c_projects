// Exercise 2.20
// Circle area, Diameter and Cicumference
#include <stdio.h>

int main() {

    puts("For a circle of r = 2:");
    int r = 2;

    printf("Diameter is %d\n", 2 * r);
    printf("Circumference is %f\n", 2 * 3.14159 * r);    
    printf("Circle area is %f\n", 3.14159 * r * r);

    return 0;
}