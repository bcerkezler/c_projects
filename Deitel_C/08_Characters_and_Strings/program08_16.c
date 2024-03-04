// Searching for Substrings
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50
#define SRC_LENGTH 20

int main(void) {
    char text[MAX_LENGTH];
    char searchStr[SRC_LENGTH];
    char *searchPtr;

    printf("Enter a line of text: ");
    fgets(text, MAX_LENGTH, stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("Enter a search string: ");
    scanf("%s", searchStr);

    searchPtr = strstr(text, searchStr);
    if (searchPtr != NULL) {
        printf("Remainder is %s\n", searchPtr);
    }

    searchPtr = strstr(searchPtr + 1, searchStr);
    if (searchPtr != NULL) {
        printf("Remainder is %s\n", searchPtr);
    }
    
    return 0;
}

