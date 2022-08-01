#include <stdio.h>

int main() {

    double n, sum = 0.0;

    printf("This program sums a series of double values.\n");
    printf("Enter double values (0 to terminate) :");

    scanf("%lf", &n);
    while(n != 0) {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %.4lf\n", sum);

    return 0;
}