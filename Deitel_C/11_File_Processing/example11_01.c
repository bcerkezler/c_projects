// Creating a sequential file
#include <stdio.h>

int main(void) {
    FILE *cfPtr = NULL;

    if ((cfPtr = fopen("clients.txt","w")) == NULL) {
        puts("File could not be opened");
    }
    else {
        puts("Enter the aaccount, name and balance");
        puts("Enter EOF to end input");
        printf("? ");

        int account = 0;
        char name[30] = "";
        double balance = 0.0;

        scanf("%d%29s%lf", &account, name, &balance);

        while (!feof(stdin)) {
            fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
            printf("? ");
            scanf("%d%29s%lf", &account, name, &balance);
        }
        
        fclose(cfPtr);
    }

    return 0;
}
