#include <stdio.h>
#include <string.h>

int main()
{
    char smallest_word[21], largest_word[21], word[21];

    printf("Enter word: ");
    gets(word);
    strcpy(smallest_word, word);
    strcpy(largest_word, word);
    
    do {
        printf("Enter word: ");
        gets(word);
        if (strcmp(word, smallest_word) < 0) {
            strcpy(smallest_word, word);
        }
        else if (strcmp(word, largest_word) > 0) {
            strcpy(largest_word, word);
        }
    } while(strlen(word) != 4);

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);  
    
    return 0;
}