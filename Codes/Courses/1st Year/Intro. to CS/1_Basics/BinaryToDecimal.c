//Binary sayiyi decimale ceviren program.
#include <stdio.h>

int main()
{
    int binary, decimal = 0, i, pow = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary != 0)
    {
        decimal += (binary % 10) * pow;
        binary /= 10;
        pow *= 2;  
    }
    
    printf("Decimal equivalent of the binary number: %d", decimal);
    
    return 0;
}