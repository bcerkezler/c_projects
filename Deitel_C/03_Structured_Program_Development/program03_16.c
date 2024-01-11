// Exercise 3.16
// Gas Milage
#include <stdio.h>

int main(void) {
    
    double gallons, miles;
    double total_gallons = 0.0, total_miles = 0.0;
    double total_average;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%lf", &gallons);

    while (gallons != -1.0) {
        total_gallons += gallons;
        printf("Enter the miles driven: ");
        scanf("%lf", &miles);
        total_miles += miles;

        printf("The miles/gallon for this tank was %f\n\n", miles / gallons);
        printf("Enter the gallons used (-1 to end): ");
        scanf("%lf", &gallons);
    }

    total_average = total_miles / total_gallons;
    printf("The overall average miles/gallon was %f", total_average);

    return 0;
}    