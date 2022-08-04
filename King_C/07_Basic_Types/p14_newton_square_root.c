#include <stdio.h>
#include <math.h>

int main() {

    double x, y = 1.0, tmpy = 0.0, avg;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

     while (fabs(y-tmpy) >= (y * 0.00001)) {

         avg = (y + (x/y)) / 2.0;
         tmpy = y;
         y = avg;

    }

    printf("Square root: %.5lf\n", y);



    return 0;
}
