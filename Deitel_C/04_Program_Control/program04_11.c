// Exercise 4.11
// Find the Smallest
#include <stdio.h>

int main(void) {

    char choice;
    int num;
    int count;
    int min;

    do
    {
        printf("\nFind the smallest (Y/N).\n");
        choice = getchar();
        
        switch (choice)
        {
        case 'Y':
            printf("\nEnter the input sequence: ");
            scanf("%d", &count);
            
            scanf("%d", &num);
            min = num;

            for (int i = 1; i < count; i++) {
                scanf("%d", &num);
                if (num < min)
                    min = num;
            }
            
            printf("Smallest of these integers: %d\n", min);
            
            break;
        case 'N':
            break;    
        default:
            puts("Wrong input choice! Try again.");
            break;
        }
        while(getchar() != '\n');
    } while (choice != 'N');
    
}