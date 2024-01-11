// Exercise 4.23
// Calculating the Compound Interest with Integers
#include <stdio.h>
#include <math.h>

int main() {
    int year;
    int amount;
    int dollars;
    int cents;
    int principal = 1000000;
    double rate = 0.05;

    printf("%4s%21s\n", "Year", "Amount of deposit");

    for (year = 1; year <= 10; year++) {
        
        amount = principal * pow(1.0 + rate, year);

        cents = amount % 100;
        dollars = amount / 100;
        
        printf("%4d%18d", year, dollars);

        if (cents < 10) {
            printf(".0%d\n", cents);
        }
        else {
            printf(".%d\n", cents);
        }     
    }

    return 0;
}