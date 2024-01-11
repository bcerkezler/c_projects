// Exercise 3.17
// Credit-Limit Calculator
#include <stdio.h>

int main(void) {
    int account_no;
    double beg_balance, charges, credits;
    double new_balance;
    double credit_limit;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &account_no);

    while (account_no != -1.0) {
        printf("Enter beginning balance: ");
        scanf("%lf", &beg_balance);
        printf("Enter total charges: ");
        scanf("%lf", &charges);
        printf("Enter total credits: ");
        scanf("%lf", &credits);
        printf("Enter credit limit: ");
        scanf("%lf", &credit_limit);

        new_balance = beg_balance + charges - credits;
        if (new_balance > credit_limit) {
            printf("Account:\t%d\n", account_no);
            printf("Credit limit:\t%.2f\n", credit_limit);
            printf("Balance:\t%.2f\n", new_balance);
            printf("Credit Limit Exceeded.\n\n");
        }
               
        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &account_no);
    }

    return 0;
}   