#include <stdio.h>

int main()
{
    int makale[100];
    int N, i, h_index, flag = 0;

    printf("Makale sayisi: ");
    scanf("%d", &N);
    printf("Makale atif sayilarini girin: ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &makale[i]);
    }
    
    i = 0;
    while (flag != 1 || i < N)
    {
        if (makale[i] >= i+1)
        {
            h_index = makale[i];
        }
        else
        {
            flag = 1;
        }
        i++;       
    }

    printf("h-index: %d\n", h_index);
        
    return 0;
}