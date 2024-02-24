// Using Unions 2
#include <stdio.h>

union floatingPoint {
    float f;
    double d;
    long double x;
};

int main(void) {
    
    union floatingPoint test;
    
    printf("Enter a float: ");
    scanf("%f", &test.f);
    printf("%.2f\n\n", test.f);

    printf("Enter a double: ");
    scanf("%lf", &test.d);
    printf("%.4lf\n\n", test.d);

    printf("Enter a long double: ");
    scanf("%llf", &test.x);
    printf("%.6llf\n\n", test.x);


    return 0;
}