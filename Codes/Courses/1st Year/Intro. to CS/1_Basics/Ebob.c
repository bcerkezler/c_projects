/* Verilen iki sayinin ebob'unu bulan program */

#include <stdio.h>

int main()
{
    int num1, num2, r;
    
    printf("Please enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    while ((num1 % num2) > 0)
    {
        r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    printf("GCD is %d\n", num2);
    
    return 0;
}