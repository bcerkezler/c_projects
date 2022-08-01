#include <stdio.h>

int main() {

    char ch, name;

    printf("Enter a first and last name: ");
    name = getchar();

    while ((ch = getchar()) != ' ');

    while ((ch = getchar()) != '\n') {
        printf("%c", ch);
    }
    printf(", %c.\n", name);

    return 0;
}
