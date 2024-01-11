//Verilen matrisin transpozesini bulan program.
#include <stdio.h>

int main()
{
    int mtr[50][50], trans[50][50], row, column, i, j;
    
    printf("Enter the row & column size of the matrix: ");
    scanf("%d %d", &row, &column); 
    
    printf("Enter the first matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("mtr[%d][%d]: " ,i ,j);
            scanf("%d", &mtr[i][j]);
        }
    }
    
    printf("Current version of the matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", mtr[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            trans[j][i] = mtr[i][j];
        }
    }
    
    printf("Transposed version of the matrix: \n");
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d " ,trans[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}