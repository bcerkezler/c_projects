// Displaying a Sentence with Its Words Reversed
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 50
#define MAX_TOKENS 25

int main(void) {
    char text[MAX_LENGTH];
    char *tokens[MAX_TOKENS];
    char *tokenPtr;
    int count = 0;

    printf("Enter a line of text: ");
    fgets(text, MAX_LENGTH, stdin);
    text[strcspn(text, "\n")] = '\0';

    tokenPtr = strtok(text, " ");
    while (tokenPtr != NULL && count < MAX_TOKENS) {
        tokens[count] = strdup(tokenPtr);
       if (tokens[count] == NULL) {
            perror("Error allocating memory");
            return 1;
       }
       count++;
       tokenPtr = strtok(NULL, " ");
    }
    
    printf("The line with its words reversed: ");
    for (int i = count-1; i >= 0; i--) {
        printf("%s ", tokens[i]);
        free(tokens[i]);
    }
    puts("");
    
    return 0;
}

