/* Verilen bir diziyi tek-cift ayiran program */

#include <stdio.h>

int main()
{
    int list[40], i, n, low, high, tmp;
    
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter an array of integers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &list[i]);
    
    low = 0;
    high = n - 1;

    while (low < high)
    {
        if (list[low] % 2 != 0 && list[high] % 2 != 0)
        {
            low++;
        }
        else if(list[low] % 2 != 0 && list[high] % 2 == 0)
        {
            low++;
            high--;
        }
        else if(list[low] % 2 == 0 && list[high] % 2 != 0)
        {
            tmp = list[low];
            list[low] = list[high];
            list[high] = tmp;
            low++;
            high--;
        }
        else if(list[low] % 2 == 0 && list[high] % 2 == 0)
        {
            high--;
        }
    }

    printf("Final state of the array: ");
    for (i = 0; i < n; i++)
        printf("%d ", list[i]);
    
    return 0;
}