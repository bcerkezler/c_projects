// Counting the Occurrences of a Character
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50

int main(void) {
    char text[MAX_LENGTH];
    char searchCh;
    char *searchPtr;
    int count = 0;
    int choice = 1;
    
    printf("Enter a character to search: ");
    scanf("%c", &searchCh);
    getchar();

    while (choice) {
        printf("Enter a line of text: ");
        fgets(text, MAX_LENGTH, stdin);
        text[strcspn(text, "\n")] = '\0';

        searchPtr = strchr(text, searchCh);
        while (searchPtr != NULL) {
            count++;
            searchPtr = strchr(searchPtr+1, searchCh);
        }

        printf("Enter another line of text (1) or exit (0): ");
        scanf("%d", &choice);
        getchar();
    }
    
    printf("Total occurence of the character %c is %d\n", searchCh, count);
    
    return 0;
}
