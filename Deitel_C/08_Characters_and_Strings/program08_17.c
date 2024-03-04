// Counting the Occurrences of a Substring
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50
#define SRC_LENGTH 20

int main(void) {
    char text[MAX_LENGTH];
    char searchStr[SRC_LENGTH];
    char *searchPtr;
    int count = 0;
    int choice = 1;
    
    printf("Enter a search string: ");
    scanf("%s", searchStr);
    getchar();

    printf("Enter a line of text: ");
    fgets(text, MAX_LENGTH, stdin);
    text[strcspn(text, "\n")] = '\0';


    while (choice) {
        searchPtr = strstr(text, searchStr);
        while (searchPtr != NULL) {
            count++;
            searchPtr = strstr(searchPtr+1, searchStr);
        }

        printf("Enter another line of text (1) or exit (0): ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            printf("Enter another line of text: ");
            fgets(text, MAX_LENGTH, stdin);
            text[strcspn(text, "\n")] = '\0';
        }
    }
    
    printf("Total occurence of the search string is %d\n", count);
    
    return 0;
}

