// Tokenizing Telephone Numbers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 15

int main(void) {
    char telephone_No[MAX_LENGTH];
    char area_code[4]; 
    char phone_number[MAX_LENGTH - 4];
    char *tokenPtr;
    
    printf("Enter the telephone number to be tokenized: \n");
    fgets(telephone_No, MAX_LENGTH, stdin);
    telephone_No[strcspn(telephone_No, "\n")] = '\0';

    tokenPtr = strtok(telephone_No + 1, ") ");
    if (tokenPtr != NULL) {
        strcpy(area_code, tokenPtr);
    } else {
        printf("Invalid telephone number format\n");
        return 1;
    }
    
    tokenPtr = strtok(NULL, "-");
    if (tokenPtr != NULL) {
        strcpy(phone_number, tokenPtr);
    } else {
        printf("Invalid telephone number format\n");
        return 1;
    }

    tokenPtr = strtok(NULL, "\n");
    if (tokenPtr != NULL) {
        strcat(phone_number, tokenPtr);
    } else {
        printf("Invalid telephone number format\n");
        return 1;
    }

    printf("\nArea code = %ld,  Phone number = %ld\n", strtol(area_code, NULL, 10), strtol(phone_number, NULL, 10));

    return 0;
}