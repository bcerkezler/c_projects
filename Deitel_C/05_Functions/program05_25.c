// Find the Minimum
#include <stdio.h>

float findMin(float, float, float);

int main(void) {
    float num1, num2, num3;

    printf("\nEnter 3 floating-point numbers: ");
    scanf("%f%f%f", &num1, &num2, &num3);

    printf("Smallest number is %.2f\n\n", findMin(num1, num2, num3));

    return 0;
}

float findMin(float num1, float num2, float num3) {
    if (num1 < num2 && num1 < num3)
        return num1;
    else if (num2 < num1 && num2 < num3)
        return num2;
    else if (num3 < num1 && num3 < num2)
        return num3;
}





       