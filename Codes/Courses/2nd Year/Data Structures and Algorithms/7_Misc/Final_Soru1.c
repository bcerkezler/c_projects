#include <stdio.h>

int main()
{
    int A[100][2];
    int komsu[100][100];
    int N, i, j, k, bilgi;

    printf("Ders sayisi: ");
    scanf("%d", &N);

    printf("Dersin cakisma grafini girin.");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == j)
            {
                komsu[i][j] = -1;
            }
            else
            {
                for (k = 1; k <= A[i][1] ; k++)
                {
                    if (A[i][0] + k <= A[j][0] && A[i][0] + k >= A[j][0] + A[j][1])
                    {
                        komsu[i][j] = 1;
                    }
                    else
                    {
                        komsu[i][j] = 0;
                    }
                    
                }
                
            }
             
        }
        
    }

    printf("Cakisma bilgisi istenen ders: ");
    scanf("%d", &bilgi);

    printf("%d no'lu ders ile ", bilgi);
    for (i = 0; i < 2; i++)
    {
        if (komsu[bilgi][i] == 1)
        {
            printf("%d ", bilgi[j]);
        }
    }
    printf("no'lu dersler cakisiyor.\n");
    
    
}