// File Matching
#include <stdio.h>

int main(void) {

    FILE *ofPtr, *nfPtr, *tfPtr;

    if (
        (ofPtr = fopen("oldmast.dat", "r")) != NULL 
                        &&
        (nfPtr = fopen("newmast.dat", "w")) != NULL
                        &&
        (tfPtr = fopen("trans.dat", "r")) != NULL 
                                                    ) 
    {
       int accountNo1 = 0;
       int accountNo2 = 0;
       char name[15] = "";
       char surname[15] = "";
       double balance = 0.0;
       double amount = 0.0;


        fscanf(ofPtr ,"%d %s %s %lf", &accountNo1, name, surname, &balance);
        fscanf(tfPtr ,"%d%lf", &accountNo2, &amount);

        while (!feof(ofPtr) || !feof(tfPtr)) {
            if (accountNo1 == accountNo2) {
                balance += amount;
                fprintf(nfPtr, "%d  %s %s  %.2lf\n", accountNo1, name, surname, balance);
                fscanf(ofPtr ,"%d %s %s %lf", &accountNo1, name, surname, &balance);
                fscanf(tfPtr ,"%d%lf", &accountNo2, &amount);
            }
            else if (accountNo1 > accountNo2) {
                printf("Unmatched transaction record for account number %d\n", accountNo2);
                fscanf(tfPtr ,"%d%lf", &accountNo2, &amount);
            }
            else {
                fprintf(nfPtr, "%d  %s %s  %.2lf\n", accountNo1, name, surname, balance);
                fscanf(ofPtr ,"%d %s %s %lf", &accountNo1, name, surname, &balance);
            }
        }

        if (accountNo1 < accountNo2) {
            printf("Unmatched transaction record for account number %d\n", accountNo2);
        }
        
        fprintf(nfPtr, "%d  %s %s  %.2lf\n", accountNo1, name, surname, balance);
    }
    else {
        printf("One of the files couldn't opened succesfully!");
    }
    
    fclose(ofPtr);
    fclose(nfPtr);
    fclose(tfPtr);

    return 0;
}