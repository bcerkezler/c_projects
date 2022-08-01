#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 50

int compute_scrabble_value(const char *word); 

int main() {

    int value = 0;
    char word[MAX_LEN];

    printf("Enter a word: ");
    gets(word);
    
    printf("Scrabble value: %d\n", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word)
{
    const char *p = word;
    int value = 0;
    
    while (*p) {
        switch (toupper(*p++)) {
            case 'A': case 'E': case 'I':
            case 'L': case 'N': case 'O':
            case 'R': case 'S': case 'T':
            case 'U':
                value++;
                break;
            case 'D': case 'G':
                value += 2;
                break;
            case 'B': case 'C': case 'M':
            case 'P':
                value += 3;
                break;
            case 'F': case 'H': case 'V':
            case 'W': case 'Y':
                value += 4;
                break;
            case 'K':
                value += 5;
                break;
            case 'J': case 'X':
                value += 8;
                break;
            case 'Q': case 'Z':
                value += 10;
                break;
            default:
                break;
        }
    }

    return value;
}