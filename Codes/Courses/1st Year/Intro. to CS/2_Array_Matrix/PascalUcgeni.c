/* Pascal ucgeninin verilen sayi kadar satirini
 * ekrana yazdiran program.
 */

#include <stdio.h>

int main()
{
    int pascal[100][100], n, i, j;
    
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i ; j++)
        {
            if (i == j || j == 0)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];  
        }
    }
    
    printf("Pascal Triangle: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%d ", pascal[i][j]);
        printf("\n");
    }
    
    return 0;
}