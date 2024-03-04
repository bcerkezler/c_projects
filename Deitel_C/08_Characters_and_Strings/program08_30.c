// Write Your Own String-Length Functions
#include <stdio.h>

size_t my_strlen1(const char *str) {
    size_t length = 0;
    // Iterate through the string until the null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

size_t my_strlen2(const char *str) {
    const char *ptr = str; // Pointer to traverse the string
    // Move the pointer until it points to the null terminator
    while (*ptr != '\0') {
        ptr++;
    }
    // Calculate the length by subtracting the initial pointer position from the current position
    return ptr - str;
}

int main() {
    const char *str = "Hello, world!";
    size_t length = my_strlen1(str);
    printf("Length of the string: %zu\n", length);

    str = "Fuck, you!";
    length = my_strlen2(str);
    printf("Length of the string: %zu\n", length);

    return 0;
}
