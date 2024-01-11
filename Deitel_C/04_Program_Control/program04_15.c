// Exercise 4.15
// Modified Compound-Interest Program
#include <stdio.h>
#include <math.h>

int main() {
    double principal = 1000.0;
    double rate = 0.05;

    for (int i = 1; i <= 6; i++) {
        printf("\nFor the interest rate of %.2f\n" ,rate); 
        printf("%4s%21s\n", "Year", "Amount of deposit");

        for (int year = 1; year <= 10; ++year) {
            double amount = principal * pow(1.0 + rate, year);
            printf("%4d%21.2f\n", year, amount);
        }
        puts("");
        rate += 0.01;
    }
}