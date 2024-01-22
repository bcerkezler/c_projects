// Transaction-processing program reads a random-access file sequentially,
// updates data already written to the file, creates new data to
// be placed in the file, and deletes data previously stored in the file.
#include <stdio.h>

struct clientData {
    int account;
    char lastName[15];
    char firstName[10];
    double balance;
};

int enterChoice(void);
void textFile(FILE *readPtr);
void updateRecord(FILE *fPtr);
void newRecord(FILE *fPtr);
void deleteRecord(FILE *fPtr);

int main(void) {
    FILE *cfPtr = NULL;

    if ((cfPtr = fopen("accounts.dat","rb+")) == NULL) {
        puts("File could not be opened");
    }
    else {
        int choice = 0;

        while ((choice = enterChoice()) != 5) {
            switch (choice)
            {
                case 1:
                    textFile(cfPtr);
                    break;
                case 2:
                    updateRecord(cfPtr);
                    break;
                case 3:
                    newRecord(cfPtr);
                    break;
                case 4:
                    deleteRecord(cfPtr);
                    break;                                                
                default:
                    puts("Incorrect choice");
                    break;
            }
        }
        
        fclose(cfPtr);
    }
    
    return 0;
}

void textFile(FILE *readPtr) {
    FILE *writePtr = NULL;

    if ((writePtr = fopen("accounts.txt","w")) == NULL) {
        puts("File could not be opened");
    }
    else {
        rewind(readPtr);
        fprintf(writePtr, "%-6s%-16s%-11s%10s\n", 
            "Acct", "Last Name", "First Name", "Balance");

        while (!feof(readPtr)) {
            struct clientData client = {0, "", "", 0.0};
            size_t result = 
               fread(&client, sizeof(struct clientData), 1, readPtr);
            
            if (result != 0 && client.account != 0) {
                fprintf(writePtr, "%-6d%-16s%-11s%10.2f\n", client.account, 
                   client.lastName, client.firstName, client.balance);                
            }
        }
        
        fclose(writePtr);
    }
}

void updateRecord(FILE *fPtr) {
    printf("Enter account to update (1-100): ");
    int account = 0;
    scanf("%d", &account);

    fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);
    
    struct clientData client = {0, "", "", 0.0};
    fread(&client, sizeof(struct clientData), 1, fPtr);

    if (client.account == 0) {
        printf("Account #%d has no information.\n", account);
    }
    else {
        printf("%-6d%-16s%-11s%10.2f\n\n", client.account, 
            client.lastName, client.firstName, client.balance);

        printf("Enter charge (+) or payment (-): ");
        double transaction = 0.0;
        scanf("%lf", &transaction);
        client.balance += transaction;
        printf("%-6d%-16s%-11s%10.2f\n", client.account, 
            client.lastName, client.firstName, client.balance);
        
        fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);
        fwrite(&client, sizeof(struct clientData), 1, fPtr);               
    } 
}

void newRecord(FILE *fPtr) {
    printf("Enter new account number (1-100): ");
    int account = 0;
    scanf("%d", &account);

    fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);
    
    struct clientData client = {0, "", "", 0.0};
    fread(&client, sizeof(struct clientData), 1, fPtr);

    if (client.account != 0) {
        printf("Account #%d already contains information.\n", client.account);
    }
    else {
        printf("Enter lastname, firstname, balance\n? ");
        scanf("%14s%9s%lf", &client.lastName,
            &client.firstName, &client.balance);

        client.account = account;   
        
        fseek(fPtr, (client.account - 1) * sizeof(struct clientData), SEEK_SET);
        fwrite(&client, sizeof(struct clientData), 1, fPtr);               
    } 
}

void deleteRecord(FILE *fPtr) {
    printf("Enter account number to delete (1-100): ");
    int account = 0;
    scanf("%d", &account);

    fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);
    
    struct clientData client = {0, "", "", 0.0};
    fread(&client, sizeof(struct clientData), 1, fPtr);

    if (client.account == 0) {
        printf("Account #%d does not exist.\n", account);
    }
    else {
        fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);
        struct clientData blankClient = {0, "", "", 0.0};
        fwrite(&blankClient, sizeof(struct clientData), 1, fPtr);               
    } 
}

int enterChoice(void) {
    printf("\nEnter your choice\n"
        "1 - store a formatted text file of accounts called\n"
        "    \"accounts.txt\" for printing\n"
        "2 - update an account\n"
        "3 - add a new account\n"
        "4 - delete an account\n"
        "5 - end profram\n? ");
        
        int menuChoice = 0;
        scanf("%d", &menuChoice);
        return menuChoice;
}









