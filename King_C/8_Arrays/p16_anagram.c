#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    int alpha[26] = {0}, i, flag = 0;

    printf("Enter first word: ");
    do
    {
        scanf("%c", &ch);
        if (isalpha(tolower(ch))) 
            alpha[ch - 'a']++;
    
    } while (ch != '\n');
    
    printf("Enter second word: ");
    do
    {
        scanf("%c", &ch);
        if (isalpha(tolower(ch))) 
            alpha[ch - 'a']--;
    
    } while (ch != '\n');

    for (i = 0; i < 26; i++)
    {
        if (alpha[i] != 0)
        {
            flag = 1;
        }    
    }

    if (flag == 0)
    {
        printf("The words are anagrams.");
    }
    else
    {
        printf("The words are not anagrams.");
    }
    
    return 0;        
}