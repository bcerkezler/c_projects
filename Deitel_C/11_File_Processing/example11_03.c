// Credit inquiry program
#include <stdbool.h>
#include <stdio.h>

enum Options {ZERO_BALANCE = 1, CREDIT_BALANCE, DEBIT_BALANCE, END};

bool shouldDisplay(enum Options option, double balance) {
    if ((option == ZERO_BALANCE) && (balance == 0)) {
        return true;
    }
    
    if ((option == CREDIT_BALANCE) && (balance < 0)) {
        return true;
    }
    
    if ((option == DEBIT_BALANCE) && (balance > 0)) {
        return true;
    }

    return false;
}

int main(void) {
    FILE *cfPtr = NULL;

    if ((cfPtr = fopen("clients.txt", "r")) == NULL) {
        puts("File could not be opened");
    }
    else {
        printf("Enter request\n"
           "1 - List accounts with zero balances\n"
           "2 - List accounts with credit balances\n"
           "3 - List accounts with debit balances\n"
           "4 - End of run\n? ");
        
        int request = 0;
        scanf("%d", &request);

        while (request != END) {
            switch (request) {
                case ZERO_BALANCE:
                    puts("\nAccounts with zero balances:");
                    break;
                case CREDIT_BALANCE:
                    puts("\nAccounts with credit balances:");
                    break;                    
                case DEBIT_BALANCE:
                    puts("\nAccounts with debit balances:");
                    break;            
            }
        
        
            int account = 0;
            char name[30] = "";
            double balance = 0.0;

            fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
       
            while (!feof(cfPtr)) {
                if (shouldDisplay(request, balance)) {
                    printf("%-10d%-13s%7.2f\n", account, name, balance);
                }
                
                fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
            }

            rewind(cfPtr);

            printf("\n? ");
            scanf("%d", &request);
        }
        
        puts("End of run.");
        fclose(cfPtr);
    }
    
    return 0;    
}
