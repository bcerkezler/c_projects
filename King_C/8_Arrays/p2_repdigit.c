#include <stdio.h>

int main()
{
    int digit_occ[10] = {0};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_occ[digit]++;
        n /= 10;    
    }
    
    printf("Digit:       ");
    for (i = 0; i < 10; i++) {
        printf("%3d", i);
    }

    printf("\nOccurences:  ");
    for (i = 0; i < 10; i++) {
        printf("%3d", digit_occ[i]);
    }
    

    return 0;      
}