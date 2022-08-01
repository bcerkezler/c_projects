#include <stdio.h>

int main()
{
    int qnotes[5][5], i, j,
    total = 0, high, low;
    float avg;

    for (i = 0; i < 5; i++)
    {
        printf("Enter %d.student's quiz notes: ", i+1);
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &qnotes[i][j]);
        }
    }
    printf("\n");
    
    for (i = 0; i < 5; i++)
    {
        printf("Student %d: ", i+1);
        for (j = 0; j < 5; j++)
        {
            total += qnotes[i][j];
        }
        avg = total / 5;
        printf("total = %d, avg = %.2f\n", total, avg);
        total = 0;
    }
    printf("\n");
    avg = 0;

    for (i = 0; i < 5; i++)
    {
        high = qnotes[0][i];
        low = qnotes[0][i];
        printf("Quiz %d: ", i+1);
        for (j = 0; j < 5; j++)
        {
            total += qnotes[j][i];
            if (high <= qnotes[j][i])
            {
                high = qnotes[j][i];
            }
            
            if (low >= qnotes[j][i])
            {
                low = qnotes[j][i];
            }
            
        }
        avg = total / 5;
        printf("avg = %.2f, high = %d, low = %d\n", avg, high, low);
        total = 0;
    }
    printf("\n");

    return 0;
}