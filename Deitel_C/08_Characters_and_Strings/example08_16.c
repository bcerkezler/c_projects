// Using function strpbrk
#include <stdio.h>
#include <string.h>

int main(void) {
    // initialize two char pointers
    const char *string1 = "This is a test"; 
    const char *string2 = "beware"; 

    printf("%s \"%s\"\n'%c'%s \"%s\"\n", 
        "Of the characters in", string2, *strpbrk(string1, string2),
        " appears earliest in", string1);
    
    return 0;
}