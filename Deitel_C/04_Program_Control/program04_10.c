// Exercise 4.10
// Average a Sequence of Integers
#include <stdio.h>

int main(void) {

    char choice;
    int num = 0;
    int sum = 0;
    int count = 0;
    double average;

    do
    {
        printf("Average of a sequence of integers (Y/N).\n");
        choice = getchar();
        
        switch (choice)
        {
        case 'Y':
            printf("\nEnter the input sequence: ");

            scanf("%d", &num);
            while (num != 9999) {
                sum += num;
                count++;
                scanf("%d", &num);
            }
            
            
            average = (double) sum / count;
            printf("Average of these integers: %.3f\n\n", average);
            sum = 0;
            count = 0;
            
            break;
        case 'N':
            break;    
        default:
            puts("Wrong input choice! Try again.\n");
            break;
        }
        while(getchar() != '\n');
    } while (choice != 'N');
    
}