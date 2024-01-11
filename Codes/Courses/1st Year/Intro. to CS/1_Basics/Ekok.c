/* Verilen iki sayinin ekok'unu bulan program */

#include <stdio.h>

int main()
{
    int num1, num2, r, tmp1, tmp2, gcd, lcm;
    
    printf("Please enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    tmp1 = num1;
    tmp2 = num2;

    while ((tmp1 % tmp2) > 0)
    {
        r = tmp1 % tmp2;
        tmp1 = tmp2;
        tmp2 = r;
    }

    gcd = tmp2;
    
    lcm = (num1 * num2) / gcd;
    printf("LCM is %d\n", lcm);

    return 0;
}