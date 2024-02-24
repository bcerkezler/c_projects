// Comparing Strings
#include <stdio.h>
#include <string.h>

int main(void) {

    char s1[20], s2[20];

    printf("Enter two strings to compare: \n");
    scanf("%s%s", s1, s2);
    
    
    if (strcmp(s1, s2) < 0) {
        printf("String 1 is less than string 2\n");
    }
    else if (strcmp(s1, s2) == 0) {
        printf("String 1 is equal to string 2\n");
    }
    else {
        printf("String 1 is greater than string 2\n");
    }
    

    return 0;
}