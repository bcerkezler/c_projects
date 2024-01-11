// Rounding Numbers
#include <stdio.h>
#include <math.h>

int roundToInteger(double x);
double roundToTenths(double x);
double roundToHundreths(double x);
double roundToThousandths(double x);

int main(void) {
    double x;
    int first = 1;
    
    printf("Enter 5 numbers to be rounded:\n");
    
    for (int i = 1; i <= 5; i++) {
        scanf("%lf", &x);
        if (first == 1) {
            puts("");
            first = 0;
        }
        
        printf("%.4f  %4d  %8.2f  %8.2f  %10.3f\n", x, roundToInteger(x), roundToTenths(x), roundToHundreths(x), roundToThousandths(x));
    }

    return 0;
}

int roundToInteger(double x) {
    return floor(x + .5);
}

double  roundToTenths(double x) {
    return floor(x * 10 + .5) / 10;
}

double  roundToHundreths(double x) {
    return floor(x * 100 + .5) / 100;
}

double roundToThousandths(double x) {
    return floor(x * 1000 + .5) / 1000;
}