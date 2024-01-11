// Hypotenuse Calculations
#include <stdio.h>
#include <math.h>

double hypotenuse(double side1, double side2);

int main(void) {
   
    double side1, side2;

    printf("Enter the right triangle's sides:\n");
    scanf("%lf%lf", &side1, &side2);

    printf("The hypotenuse is %.1f", hypotenuse(side1, side2));

    return 0;
}


double hypotenuse(double side1, double side2) {
    return sqrt((side1 * side1) + (side2 * side2));
}