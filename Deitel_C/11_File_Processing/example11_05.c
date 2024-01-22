// Writing data randomly to a random-access file
#include <stdio.h>

struct clientData {
    int account;
    char lastName[15];
    char firstName[10];
    double balance;
};

int main(void) {
    FILE *cfPtr = NULL;

    if ((cfPtr = fopen("accounts.dat","rb+")) == NULL) {
        puts("File could not be opened");
    }
    else {
        struct clientData client = {0, "", "", 0.0};

        printf("Enter account number (1 to 100, 0 to end input): ");
        scanf("%d", &client.account);
        
        while (client.account != 0) {
            printf("Enter lastname, firstname, balance: ");
            fscanf(stdin, "%14s%9s%lf", client.lastName,
               client.firstName, &client.balance);
            
            fseek(cfPtr, (client.account - 1) * sizeof(struct clientData), SEEK_SET);
            fwrite(&client, sizeof(struct clientData), 1, cfPtr);
            
            printf("Enter account number: ");
            scanf("%d", &client.account);
        }
        
        fclose(cfPtr);
    }
    
    return 0;
}
