// Using function memmove
#include <stdio.h>
#include <string.h>

int main(void) {
    char x[] = "Home Sweet Home"; // initialize char array x

    printf("The string in array x before memmove is: %s\n", x);
    printf("The string in array x after memmove is: %s\n",
       (char *) memmove(x, &x[5], 10));

    return 0;
}