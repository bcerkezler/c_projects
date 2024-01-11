#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, strx, stry, endx, endy, curx, cury, minroad = 0, flag = 0; //x satir y sutun.

    printf("Harita boyutunu girin: ");
    scanf("%d", &n);
    
    int Board[5][5] = {{0,5,30,-20,40},{20,-10,10,5,50},{5,50,-40,15,60},{10,-10,10,-5,70},{15,20,30,-20,0}};
    
    do
    {
        flag = 0;
        printf("Baslangic x koordinati: ");
        scanf("%d", &strx);
        printf("Baslangic y koordinati: ");
        scanf("%d", &stry);
        printf("Bitis x koordinati: ");
        scanf("%d", &endx);
        printf("Bitis y koordinati: ");
        scanf("%d", &endy);

        if (Board[strx][stry] != 0 || Board[endx][endy] != 0)
        {
            flag = 1;
            printf("Hatali koordinatlar.Tekrar girin.\n");
        }
        
    } while (flag != 0);

    curx = strx;
    cury = stry;

    printf("\n1- Saga");
    printf("\n2- Sola");     
    printf("\n3- Yukari");
    printf("\n4- Asagi");
    printf("\nHareketi temsil etmektedir.");

    printf("\nMin Road: ");
    while (curx != endx && cury != endy)
    {
        if (curx <= endx && cury <= endy)
        {
            if (Board[curx][cury+1] <= Board[curx+1][cury])
            {
                minroad += Board[curx][cury+1];
                cury++;
                printf("1 "); 
            }
            else
            {
                minroad += Board[curx+1][cury];
                curx++;
                printf("4 ");
            }
        }
        else if (curx <= endx && cury >= endy) 
        {
            if (Board[curx][cury-1] <= Board[curx+1][cury])
            {
                minroad += Board[curx][cury-1];
                cury++;
                printf("2 "); 
            }
            else
            {
                minroad += Board[curx+1][cury];
                curx++;
                printf("4 ");
            }
        }
        else if (curx >= endx && cury <= endy) 
        {
            if (Board[curx][cury+1] <= Board[curx-1][cury])
            {
                minroad += Board[curx][cury+1];
                cury++;
                printf("1 "); 
            }
            else
            {
                minroad += Board[curx-1][cury];
                curx++;
                printf("3 ");
            }
   
        }
        else if (curx >= endx && cury >= endy) 
        {
            if (Board[curx][cury-1] <= Board[curx-1][cury])
            {
                minroad += Board[curx][cury-1];
                cury++;
                printf("2 "); 
            }
            else
            {
                minroad += Board[curx-1][cury];
                curx++;
                printf("3 ");
            }
   
        }
    }
    
    printf(" Min Road: %d", minroad);
    return 0;
}