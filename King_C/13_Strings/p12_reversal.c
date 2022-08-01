#include <stdio.h>

int main()
{
    char sentence[30][21], ch = '0', term;
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n') {
        if (ch == ' ') {
            sentence[i][j] = '\0';
            i++;
            j = 0;
        }
        else if (ch == '.' || ch == '?' || ch == '!') {
            term = ch;
            sentence[i][j] = '\0';
            break;
        }
        else {
            sentence[i][j++] = ch;
        }
    }

    printf("Reversal of sentence: ");
    while (i > 0) {
        printf("%s ",sentence[i--]);
    }
    printf("%s%c", sentence[i], term);
    
    return 0;
}