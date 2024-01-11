/* Verilen bir diziyi ters ceviren program */

#include <stdio.h>

int main()
{
    int list[40], n, i, tmp;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter an array of integers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &list[i]);
    
    for (i = 0; i < n/2; i++)
    {
        tmp = list[i];
        list[i] = list[n-i-1];
        list[n-i-1] = tmp;
    }

    printf("Reversed version: ");
    for (i = 0; i < n; i++)
        printf("%d ", list[i]);
    
    printf("\n");
    return 0;
}