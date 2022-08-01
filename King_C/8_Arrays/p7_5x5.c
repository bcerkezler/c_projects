#include <stdio.h>

int main() 
{
    int matrix[5][5], i, j,
    row_sum = 0, col_sum = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i+1);
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nRow totals:");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            row_sum += matrix[i][j];
        }
        printf(" %d", row_sum);
        row_sum = 0;
    }
    printf("\nColumn totals:");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {    
            col_sum += matrix[j][i];
        }
        printf(" %d", col_sum);
        col_sum = 0;
    }
    printf("\n");

    return 0;
}