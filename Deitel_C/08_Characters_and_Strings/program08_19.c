// Counting the Letters of the Alphabet in a String
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 50

void toLowercase(char *str);

int main(void) {
    char text[MAX_LENGTH];
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                       'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int alphabet_count[26] = {0};
    char *searchPtr;
    int choice = 1;
    

    while (choice) {
        printf("Enter a line of text: ");
        fgets(text, MAX_LENGTH, stdin);
        text[strcspn(text, "\n")] = '\0';
        toLowercase(text);

        for (int i = 0; i < 26; i++) {
            searchPtr = strchr(text, alphabet[i]);
            while (searchPtr != NULL) {
                alphabet_count[i]++;
                searchPtr = strchr(searchPtr+1, alphabet[i]);
            }
        }
        
        printf("Enter another line of text (1) or exit (0): ");
        scanf("%d", &choice);
        getchar();
    }
    
    printf("Letters  ");
    for (int i = 0; i < 26; i++) {
        printf("%2c  ", alphabet[i]);
    }

    printf("\nCount    ");
    for (int i = 0; i < 26; i++) {
        printf("%#02d  ", alphabet_count[i]);
    }    
    
    
    return 0;
}

void toLowercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}