//Verilen iki matrisi toplayan program.
#include <stdio.h>

int main()
{
    int mtr1[50][50], mtr2[50][50], sum[50][50], row, column, i, j;

    printf("Enter the row & column size: ");
    scanf("%d %d", &row, &column); 
    
    printf("Enter the first matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("mtr1[%d][%d]: " ,i ,j);
            scanf("%d", &mtr1[i][j]);
        }
    }

    printf("Enter the second matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("mtr2[%d][%d]: " ,i ,j);
            scanf("%d", &mtr2[i][j]);
        }
    }
    
    printf("Sum of the two matrices: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            sum[i][j] = mtr1[i][j] + mtr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}