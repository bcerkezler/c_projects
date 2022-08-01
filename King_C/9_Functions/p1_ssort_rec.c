#include <stdio.h>

#define MAX_LEN 100

void selection_sort(int arr[], int n);

int main()
{
    int n, i, arr[MAX_LEN];
    
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    printf("Enter the integers:\n");
    for(i=0; i<n; i++)
    {
        printf("S[%d]: ", i+1);
        scanf("%d", &arr[i]);                               
    }

    selection_sort(arr, n);

    printf("Sorted list:");
    for (i=0; i<n; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int arr[], int n)
{
     if (n == 0) return;

    int i, temp, max = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] > arr[max])
            max = i;
    }

    temp = arr[max];
    arr[max] = arr[n-1];
    arr[n-1] = temp;

    selection_sort(arr, n-1);
}