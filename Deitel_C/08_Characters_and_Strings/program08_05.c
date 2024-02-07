// Character Testing
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("%c %s digit.\n", c, isdigit(c) ? "is a" : "is not a");
    printf("%c %s letter.\n", c, isalpha(c) ? "is a" : "is not a");
    printf("%c %s letter or digit.\n", c, isalnum(c) ? "is a" : "is not a");
    printf("%c %s hexadecimal digit.\n", c, isxdigit(c) ? "is a" : "is not a");
    printf("%c %s lowercase.\n", c, islower(c) ? "is" : "is not");
    printf("%c %s uppercase.\n", c, isupper(c) ? "is" : "is not");
    printf("Lowercase %c is %c.\n", c, tolower(c));
    printf("Uppercase %c is %c.\n", c, toupper(c));
    printf("%c %s space.\n", c, isspace(c) ? "is a" : "is not a");
    printf("%c %s control character.\n", c, iscntrl(c) ? "is a" : "is not a");
    printf("%c %s puncuation.\n", c, ispunct(c) ? "is a" : "is not a");
    printf("%c %s printing character.\n", c, isprint(c) ? "is a" : "is not a");
    printf("%c %s printing character (w/o space).\n", c, isgraph(c) ? "is a" : "is not a");

    return 0;
}