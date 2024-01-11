#include <stdio.h>
#define MAX 100

int main()
{
    int n, i, array[MAX], flag = 0, missing;

    printf("Size of the array: ");
    scanf("%d", &n);

    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    i = 0;
    while (flag == 0 && i < n-1)
    {
        if (array[i+1] == array[i] + 1)
        {
            i++;
        }
        else
        {
            flag = 1;
            missing = array[i] + 1;
        }               
    }

    if (flag == 1)
    {
        printf("\nMissing value: %d\n", missing);
    }
    else
    {
        printf("\nNo missing value.\n");
    }

    return 0;
}
