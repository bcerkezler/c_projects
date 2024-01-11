#include <stdio.h>
#include <stdlib.h>

//Zaman karmasikligi: O(n^2)
//Yer Karmasikligi: O(N*M + K)
int main()
{
    int i, j, N, M, K, input, farkli; 
    
    printf("N: ");
    scanf("%d", &N);

    printf("M: ");
    scanf("%d", &M);

    printf("K: ");
    scanf("%d", &K);
    

    int *resim = (int *)calloc(N * M,sizeof(int));;
    
    printf("Resim: \n");
    for (i = 0; i < N; i++)
    {    
        for (j = 0; j < M; j++) 
        {
         scanf("%d", &input);
         *(resim + i*M + j) = input; 
        }
    }

    int *renk = (int*)calloc(K,sizeof(int));
    
    for (i = 0; i < N; i++)
    {    
        for (j = 0; j < M; j++) 
        {
          renk[*(resim + i*M + j)]++; 
        }
    }

    printf("\nrenk   adet\n"); 
    for (i = 0; i < K; i++)
    {
        if (renk[i] != 0)
        {
            farkli++;
            printf("%d      %d\n",i ,renk[i]);
        }
    }
    printf("Farkli renk sayisi: %d\n", farkli);

    return 0;
}