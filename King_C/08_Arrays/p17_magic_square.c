#include <stdio.h>

int main()
{
    int mtr[99][99] = {0}, n, r, oldr, c, oldc, i, j;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    c = n/2;
    r = 0;
    
    mtr[0][c] = 1;
    for (i = 2; i <= n*n; i++)
    {
        if (r-1 < 0 && c+1 < n)
        {
            oldr = r;
            r = n-1;
            oldc = c;
            c = c+1;
        }
        else if (r-1 >= 0 && c+1 > n-1)
        {
            oldr = r;
            r = r-1;
            oldc = c;
            c = 0;
        }
        else if (r-1 < 0 && c+1 > n-1)
        {
            oldr = r;
            r = n-1;
            oldc = c;
            c = 0;
        }
        else
        {
            oldr = r;
            r = r-1;
            oldc = c;
            c = c+1;
        }

        if (mtr[r][c] == 0)
        {
            mtr[r][c] = i;
        }
        else
        {
            r = oldr+1;
            c = oldc;
            mtr[r][c] = i;
        }  
    }
    
    printf("\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%2d ", mtr[i][j]);
        }
        printf("\n");
    }
    
    return 0;   
}