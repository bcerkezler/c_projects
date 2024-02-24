// Printing a String
#include <stdio.h>

#define PRINT(s) printf("%s", s)

int main() {
    char s[15];
    
    printf("Enter a string: ");
    scanf("%s", s);

    printf("The string is \"");
    PRINT(s);
    printf("\"");
    
    return 0;
}