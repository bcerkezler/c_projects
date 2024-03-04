// Write Your Own String-Comparison Functions
#include <stdio.h>

int my_strcmp(const char *str1, const char *str2) {
    int i = 0;
    // Iterate through both strings until a difference is found or either string ends
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] < str2[i])
            return -1;
        else if (str1[i] > str2[i])
            return 1;
        i++;
    }
    // Both strings are equal
    return 0;
}

int my_strncmp(const char *str1, const char *str2, size_t n) {
    // Compare up to n characters or until a difference is found
    while (n-- > 0 && (*str1 != '\0' || *str2 != '\0')) {
        if (*str1 < *str2)
            return -1;
        else if (*str1 > *str2)
            return 1;
        str1++;
        str2++;
    }
    // Both strings are equal up to n characters
    return 0;
}

int main() {
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    int result = my_strcmp(str1, str2);
    int result2 = my_strncmp(str1, str2, 3);
    printf("Comparison result: %d\n", result);
    printf("Comparison result: %d\n", result2);

    str1 = "Hello";
    str2 = "World";
    result = my_strcmp(str1, str2);
    result2 = my_strncmp(str1, str2, 3);
    printf("Comparison result: %d\n", result);
    printf("Comparison result: %d\n", result2);

    str1 = "World";
    str2 = "Hello";
    result = my_strcmp(str1, str2);
    result2 = my_strncmp(str1, str2, 3);
    printf("Comparison result: %d\n", result);
    printf("Comparison result: %d\n", result2);

    return 0;
}