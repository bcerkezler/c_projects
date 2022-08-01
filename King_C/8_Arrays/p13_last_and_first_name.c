#include <stdio.h>
#define SIZE 20

int main() {

    char ch, name, last_name[SIZE];
    int i = 0, count;

    printf("Enter a first and last name: ");
    name = getchar();

    while ((ch = getchar()) != ' ');

    while ((ch = getchar()) != '\n') {
        last_name[i] = ch;
        i++;
    }
    count = i;

    for (i = 0; i < count; i++)
    {
        printf("%c", last_name[i]);
    }
    
    printf(", %c.\n", name);

    return 0;
}