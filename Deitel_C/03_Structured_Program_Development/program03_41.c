// Exercise 3.41
// Diameter, Circumference and Area of a Circle
#include <stdio.h>

int main(void) {
    
    double radius;
    double pi = 3.14159;

    printf("Enter radius (-1 to exit): ");
    scanf("%lf", &radius);

    while (radius != -1)
    {
        printf("\nDiameter is: %.3f", 2 * radius);
        printf("\nCircumference is: %.3f", 2 * pi * radius);
        printf("\nArea is: %.3f\n\n", pi * radius * radius);
        
        
        printf("Enter radius (-1 to exit): ");
        scanf("%lf", &radius);
    }
    
    return 0;
}   