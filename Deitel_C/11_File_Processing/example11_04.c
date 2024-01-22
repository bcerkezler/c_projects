// Creating a random-access file sequentially
#include <stdio.h>

struct clientData {
    int account;
    char lastName[15];
    char firstName[10];
    double balance;
};

int main(void) {
    FILE *cfPtr = NULL;

    if ((cfPtr = fopen("accounts.dat","wb")) == NULL) {
        puts("File could not be opened");
    }
    else {
        struct clientData blankClient = {0, "", "", 0.0};

        for (int i = 1; i <= 100; i++) {
            fwrite(&blankClient, sizeof(struct clientData), 1, cfPtr);
        }
        
        fclose(cfPtr);
    }
    
    return 0;
}
