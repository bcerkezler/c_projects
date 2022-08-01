#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 40

int compute_vowel_count(const char *sentence);

int main() {

    char ch, sentence[MAX_LEN] = {0};
    int i = 0;


    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        sentence[i++] = ch;
    }
   
    printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));

    return 0;
}

int compute_vowel_count(const char *sentence)
{   
    const char *p = sentence;
    int vowels = 0;

    while (*p) {
        switch (toupper(*p++)) {
           case 'A': case 'E': case 'I': case 'O': case 'U':
              vowels++;
              break;
           default:
              break;
        }
    }
    return vowels;
}