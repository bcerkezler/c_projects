// Counting the Number of Words in a String
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50

int main(void) {
    char text[MAX_LENGTH];
    char *tokenPtr;
    int count = 0;
    int choice = 1;

    while (choice) {
        printf("Enter a line of text: ");
        fgets(text, MAX_LENGTH, stdin);
        text[strcspn(text, "\n")] = '\0';

        tokenPtr = strtok(text, " ");
        while (tokenPtr != NULL) {
            count++;
            tokenPtr = strtok(NULL, " ");
        }

        printf("Enter another line of text (1) or exit (0): ");
        scanf("%d", &choice);
        getchar();
    }
    
    printf("Total number of words is %d\n", count);
    
    return 0;
}

