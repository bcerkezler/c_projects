/* Bir dizinin en buyuk ikinci elemani */

#include <stdio.h>
#define SIZE 40

int main()
{
    int list[SIZE], i, j, n, tmp;
    
    printf("Please enter array size: ");
    scanf("%d", &n);
    
    printf("Please enter an integer array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (list[j] >= list[j+1])
            {
                tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
            }
            
        }
        
    }

    printf("Second max element of the array: %d\n", list[n-2]);
    return 0;
}