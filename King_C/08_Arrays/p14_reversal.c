#include <stdio.h>

int main()
{
    char sentence[80], ch = '0', term;
    int i = 0, j; 
    
    printf("Enter a sentence: ");
    while (ch != '.' && ch != '?' && ch != '!')
    {
        scanf("%c", &ch);
        sentence[i] = ch;
        i++;
    }
    term = ch;
    i--;
    sentence[i] = ' ';
    i--;

    printf("Reversal of sentence: "); 
    while (i >= -1)
    {
        if (sentence[i] == ' ' || i == -1)
        {
            j = i+1;
            while (sentence[j] != ' ')
            {
                printf("%c", sentence[j]);
                j++;
            }
            printf(" ");
        }
        
        i--;
    }

    printf("\b%c", term);
    return 0;
}