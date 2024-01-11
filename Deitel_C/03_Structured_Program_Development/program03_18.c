// Exercise 3.18
// Sales-Commision Calculator
#include <stdio.h>

int main(void) {
    
    double gross_sales;
    double salary;
    
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%lf", &gross_sales);

    while (gross_sales != -1.0) {
        salary = 200.0 + (gross_sales * 9 / 100);
        printf("Salary is: $%.2f\n\n", salary);

        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf", &gross_sales);
    }

    return 0;
}   