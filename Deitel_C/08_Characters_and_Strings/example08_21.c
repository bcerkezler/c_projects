// Using function memcpy
#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[17] = "";
    char s2[] = "Copy this string";

    memcpy(s1, s2, 17); // 17 so we copy s2's terminating \0
    puts("After s2 is copied into s1 with memcpy, s1 contains:");
    puts(s1);

    return 0;
}