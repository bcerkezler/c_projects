// Exercise 4.17
// Calculating Credit Limits
#include <stdio.h>

int main() {
    
    char choice;
    int acc_no;
    double credit_lim;
    double balance;

    do
    {
        printf("\nCheck a customer's credit situation (Y/N).\n");
        choice = getchar();
        
        switch (choice)
        {
        case 'Y':
            printf("\nEnter customer's account number: ");
            scanf("%d", &acc_no);

            printf("Enter customer's previous credit limit: ");
            scanf("%lf", &credit_lim);

            printf("Enter customer's current balance: ");
            scanf("%lf", &balance);
            
            credit_lim /= 2;
            printf("\nNew credit limit for %d is %.2f\n", acc_no, credit_lim);
            
            if (balance >= credit_lim) {
                printf("Customer no. %d's balance has exceeded their credit limit.\n");
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