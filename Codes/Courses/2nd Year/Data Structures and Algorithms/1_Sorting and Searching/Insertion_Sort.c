#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *, int);

int main()
{
    int *list, N, i, j;

    printf("Enter list size: ");
    scanf("%d", &N);
    list = (int *) malloc(sizeof(int) * N); 

    printf("Enter list elements: ");
    for (i = 0; i < N; i++)
    {
        printf("list[%d]: ", i);
        scanf("%d", &list[i]);
    }
    
    insertion_sort(list,N);

    printf("Sorted List: ");
    for (i = 0; i < N; i++)
        printf("%d ", list[i]);
   
   
    return 0;
}

void insertion_sort(int *list, int N)
{
    int i, j, tmp;

    for (i = 1; i < N; i++)
    {
        tmp = list[i];
        j = i-1;
        while (j >= 0 && tmp <= list[j])
        {
            list[j+1] = list[j];
            j--;
        }
        
        list[j+1] = tmp;
    }
    
}