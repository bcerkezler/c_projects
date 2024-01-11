//Verilen iki matrisi carpan program.
#include <stdio.h>

int main()
{
    int mtr1[50][50], mtr2[50][50], mul[50][50], row1, column1, row2, column2, i, j, k;

    printf("Enter the row & column size of the first matrix: ");
    scanf("%d %d", &row1, &column1); 
    
    printf("Enter the first matrix: \n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column1; j++)
        {
            printf("mtr1[%d][%d]: " ,i ,j);
            scanf("%d", &mtr1[i][j]);
        }
    }
    
    printf("Enter the row & column size of the second matrix: ");
    scanf("%d %d", &row2, &column2); 
    
    printf("Enter the second matrix: \n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < column2; j++)
        {
            printf("mtr2[%d][%d]: " ,i ,j);
            scanf("%d", &mtr2[i][j]);
        }
    }

    printf("First matrix: \n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column1; j++)
        {
            printf("%d ", mtr1[i][j]);
        }
        printf("\n");
    }

    printf("Second matrix: \n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < column2; j++)
        {
            printf("%d ", mtr2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column2; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < column1; k++)
            {
                mul[i][j] += mtr1[i][k] * mtr2[k][j];
            }
            
        }
        
    }
    
    printf("Multiplication of two matrices: \n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column2; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;   
}