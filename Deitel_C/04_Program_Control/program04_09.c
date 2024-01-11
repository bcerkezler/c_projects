// Exercise 4.9
// Sum of a Sequence of Integers
#include <stdio.h>

int main(void) {

    char choice;
    int count;
    int num;
    int sum = 0;

    do
    {
        printf("Sum a sequence of integers (Y/N).\n");
        choice = getchar();
        
        switch (choice)
        {
        case 'Y':
            printf("\nEnter the input sequence: ");
            scanf("%d", &count);

            for (int i = 1; i <= count ; i++) {
                scanf("%d", &num);
                sum += num;
            }
            while(getchar() != '\n');
            printf("Sum of these integers: %d\n\n", sum);
            sum = 0;
            
            break;
        case 'N':
            break;    
        default:
            puts("Wrong input choice! Try again.\n");
            break;
        }
    } while (choice != 'N');
    
}