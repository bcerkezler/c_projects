// Temperature Conversions
#include <stdio.h>

int main(void) {
    int fahrenheit = 0;
    double celsius = 0.0;
    
    printf("Enter a Fahrenheit temperature (0 - 212): ");
    scanf("%d", &fahrenheit);

    celsius = 5.0 / 9.0 * (fahrenheit - 32);

    printf("Its Celsius equivalent is %.3lf\n", celsius);

    return 0;
}