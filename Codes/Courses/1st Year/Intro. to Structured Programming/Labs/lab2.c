//https://forms.gle/fazsTDCsuXBPfFnC7
#include <stdio.h>

int main()
{
    int option, row, column, i, j, comp_row, flag = 0, notzero, max_col, max_row;
    int sparse[50][50], comp[50][3];
    do
    {
        printf("Menu: \n");
        printf("(1) Seyrek matristen sikistirilmis matrise.\n");
        printf("(2) Sikistirilmis matristen seyrek matrise.\n");
        printf("(3) Cikis.\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Matrisin boyutlarini girin (Satir,Sutun): ");
            scanf("%d", &row);
            scanf("%d", &column);
            printf("Matrisin elemanlarini girin: ");
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < column; j++)
                {
                    printf("[%d][%d]: ", i, j);
                    scanf("%d", &sparse[i][j]);
                }
            }
            printf("Sikistirilmis Matris\n\n");
            comp_row = 0;
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < column; j++)
                {
                    if (sparse[i][j] != 0)
                    {
                        comp[comp_row][0] = i;
                        comp[comp_row][1] = j;
                        comp[comp_row][2] = sparse[i][j];
                        comp_row++; 
                    }
                }
            }
            
            
            for (i = 0; i < comp_row; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("%d     ",comp[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Matriste kac tane sifirdan farkli eleman var?");
            scanf("%d", &notzero);
            for (i = 0; i < notzero; i++)
            {
                printf("%d. Eleman Icin Satir, Sutun ve Degeri Girin:", i+1);
                scanf("%d", &comp[i][0]);
                scanf("%d", &comp[i][1]);
                scanf("%d", &comp[i][2]);
            }
            
            printf("Sikistirilmis Matris\n\n");
            for (i = 0; i < notzero; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("%d     ",comp[i][j]);
                }
                printf("\n");
            }

            max_row = comp[0][0]; 
            for (i = 1; i < notzero; i++)
            {
                if(comp[i][0] >= max_row)
                {
                    max_row = comp[i][0];
                }
            }
            
            max_col = comp[0][1]; 
            for (i = 1; i < notzero; i++)
            {
                if(comp[i][1] >= max_col)
                {
                    max_col = comp[i][1];
                }
            }
            
            printf("Seyrek Matris\n\n");
            for (i = 0; i < max_row+1; i++)
            {
                for (j = 0; j < max_col+1; j++)
                {
                    sparse[i][j] = 0;
                }
            }

            for (i = 0; i < notzero; i++)
            {
                sparse[comp[i][0]][comp[i][1]] = comp[i][2];
            }
            
            for (i = 0; i < max_row+1; i++)
            {
                for (j = 0; j < max_col+1; j++)
                {
                    printf("%d ", sparse[i][j]);
                }
                printf("\n");
            }
             break;
        case 3:
              flag = 1;
             break;
        }

    } while(flag == 0);

    return 0;
}