#include <stdio.h>

int main()
{
    int i, j, tmp, size;
    int list[20];

    printf("Enter list size: ");
    scanf("%d", &size);
    printf("Enter list elements: ");
    for (i = 0; i < size; i++)
        scanf("%d" ,&list[i]);

    for (i = 0; i < size-1; i++)
    {
        for (j = 0; j < size-1-i; j++)
        {
            if (list[j] > list[j+1])
            {
                tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
            }
            
        }
        
    }
     printf("Sorted list: ");
     for (i = 0; i < size; i++)
     {
         printf("%d ", list[i]);
     }
     

    return 0;
}