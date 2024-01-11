// Exercise 4.19
// Calculating Sales
#include <stdio.h>

int main() { 
    
    char choice;
    int product_no;
    int quantity;
    double total = 0;

    do
    {
        printf("\nEnter a product (Y/N).\n");
        choice = getchar();
        
        switch (choice)
        {
        case 'Y':
            printf("\nEnter product no.: ");
            scanf("%d", &product_no);
            printf("Enter quantity sold today: ");
            scanf("%d", &quantity);
            
            switch (product_no)
            {
                case 1:
                    total += (quantity * 2.98);
                    break;
                case 2:
                    total += (quantity * 4.50);
                    break;
                case 3:
                    total += (quantity * 9.98);
                    break;
                case 4:
                   total += (quantity * 4.49);
                    break;
                case 5:
                    total += (quantity * 6.87);
                    break;
                default:
                printf("Wrong product no.! Try again.\n");
                    break;
            }
            break;
        case 'N':
            printf("\nTotal retail value: %.3f\n", total);
            puts(" ");
            break;    
        default:
            puts("Wrong input choice! Try again.\n");
            break;
        }
        while(getchar() != '\n');
    } while (choice != 'N');
    
    return 0;
}
