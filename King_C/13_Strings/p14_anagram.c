#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool are_anagrams(const char *word1, const char *word2);

int main()
{
    char ch, word1[30] = {0}, word2[30] = {0};
    int alpha[26] = {0}, i = 0;

    printf("Enter first word: ");
    while ((ch = tolower(getchar())) != '\n') {
        if (isalpha(ch)) {
            word1[i] = ch;
            i++;
        }
    }
    
    printf("Enter second word: ");
    i = 0;
    while ((ch = tolower(getchar())) != '\n') {
        if (isalpha(ch)) {
            word2[i] = ch;
            i++;
        }
    }
    
    
    if (are_anagrams(word1, word2))
    {
        printf("\n");
        printf("The words are anagrams.");
    }
    else
    {
        printf("\n");
        printf("The words are not anagrams.");
    }
    
    return 0;        
}

bool are_anagrams(const char *word1, const char *word2)
{
    int alpha[26] = {0}, i, flag = 0;
    
    while (*word1) {
        alpha[*word1 - 'a']++;
        word1++;
    }
    while (*word2) {
        alpha[*word2 - 'a']--;
        word2++;
    }
    for (i = 0; i < 26; i++)
    {
        if (alpha[i] != 0)
        {
            flag = 1;
        }    
    }

    if (flag == 0)
    {
        return true;
    }
    else
    {
        return false;
    }        
}