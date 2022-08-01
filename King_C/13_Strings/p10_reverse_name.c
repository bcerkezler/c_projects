#include <stdio.h>


#define MAX_LEN 50

void reverse_name(char *name);

int main()
{
    char name[MAX_LEN];

    printf("Enter a first and last name: ");
    gets(name);

    reverse_name(name);

    return 0;
}

void reverse_name(char *name)
{
    char *p = name, initial;

    while (*p == ' ')
        p++;
    initial = *p++;
    while (*p++ != ' ');
    while (*p == ' ')
        p++;
    while (*p != '\0' && *p != ' ') {
        putchar(*p);
        p++;
    }    
    printf(", %c.", initial);            
}