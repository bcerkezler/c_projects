// Exercise 3.20
// Salary Calculator
#include <stdio.h>

int main(void) {
    
    double hours_worked;
    double hourly_rate;
    double salary;
   
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%lf", &hours_worked);

    while (hours_worked != -1) {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &hourly_rate);

        if (hours_worked > 40) 
            salary = (40 * hourly_rate) + ((hours_worked - 40) * (hourly_rate * 1.5));
        else
            salary = hours_worked * hourly_rate;
        
        printf("Salary is $%.2f\n\n", salary);

        printf("Enter # of hours worked (-1 to end): ");
        scanf("%lf", &hours_worked);
    }
    
    return 0;
}   