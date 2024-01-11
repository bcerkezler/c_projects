#include <stdio.h>

int main()
{
    int pascal[100];
    int N;
    int j = 0;
    int k = 0;

    printf("Please enter row size: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        pascal[j] = pascal[j+i] = 1;
        j = j + i + 1;
    }

    for (int i = 1; i < N-1; i++)
    {
        for (int j = k; j < i + k; j++)
        {
            pascal[j+i+2] = pascal[j] + pascal[j+1];
        }
        k = k + i + 1;
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= N-1; j++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < i+1; j++)
        {
            printf("%d ", pascal[k+j]);
        }
        
        printf("\n");
        k = k + i + 1;
    }
    
    return 0;
}