// Pig Latin
#include <stdio.h>
#include <string.h>


void printLatinWord(char *token);

int main(void) {
    char sentence[100];
    char *tokenPtr;

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("\nPig Latin version is: ");
    tokenPtr = strtok(sentence, " ");

    while (tokenPtr != NULL) {
        printLatinWord(tokenPtr);
        printf(" ");
        tokenPtr = strtok(NULL, " ");
    }
    
    return 0;
}

void printLatinWord(char *token) {
    char firstChar = token[0];
    printf("%s%cay", token + 1, firstChar);
}