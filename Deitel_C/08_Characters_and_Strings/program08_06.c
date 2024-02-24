// Displaying Strings in Uppercase and Lowercase
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[100];
    int i = 0;

    printf("Enter a line of text: ");
    fgets(s, 100, stdin);

    while (s[i] != '\0') {
        printf("%c", toupper(s[i]));
        i++;
    }
    
    i = 0;
    
    while (s[i] != '\0') {
        printf("%c", tolower(s[i]));
        i++;
    }   

    return 0;
}