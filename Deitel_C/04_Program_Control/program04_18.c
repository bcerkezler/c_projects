// Exercise 4.18
// Bar-Chart Printing Program
#include <stdio.h>

int main() {
    
    char choice;
    int num;


    do
    {
        printf("\nPrint a bar chart (Y/N).\n");
        choice = getchar();
        
        switch (choice)
        {
        case 'Y':
            printf("\nEnter 5 numbers (between 1-30): ");

            for (int i = 1; i <= 5; i++) {
                
                scanf("%d", &num);
                for (int j = 1; j <= num; j++) {
                    printf("*");
                }
        
                puts("");
            }
            break;
        case 'N':
            break;    
        default:
            puts("Wrong input choice! Try again.\n");
            break;
        }
        while(getchar() != '\n');
    } while (choice != 'N');
    
    return 0;
}