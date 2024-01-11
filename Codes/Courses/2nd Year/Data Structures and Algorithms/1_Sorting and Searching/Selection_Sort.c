#include <stdio.h>
#include <stdlib.h>

void selection_sort(int *, int);
int smallest(int *, int, int);

int main()
{
    int *list, N, i;

    printf("Enter list size: ");
    scanf("%d", &N);
    list = (int *) malloc(sizeof(int) * N); 

    printf("Enter list elements: ");
    for (i = 0; i < N; i++)
    {
        printf("list[%d]: ", i);
        scanf("%d", &list[i]);
    }
    
    selection_sort(list,N);

    printf("Sorted List: ");
    for (i = 0; i < N; i++)
        printf("%d ", list[i]);
   
   
    return 0;
}

void selection_sort(int *list, int N)
{
    int i, pos, tmp;
    for (i = 0; i < N; i++)
    {
        pos = smallest(list,i,N);
        tmp = list[pos];
        list[pos] = list[i];
        list[i] = tmp;
    }
}

int smallest(int *list, int i, int N)
{
    int min = list[i], j;
    int pos = i;

    for (j = i+1; j < N; j++)
    {
        if (min > list[j])
        {
            min = list[j];
            pos = j;
        }
    }
    
    return pos;
}