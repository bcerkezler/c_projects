// Write Your Own String-Copy and String-Concatenation Functions
#include <stdio.h>

void my_strcpy(char *dest, const char *src) {
    int i = 0;
    // Copy characters until null terminator is encountered in src
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    // Append null terminator to destination string
    dest[i] = '\0';
}

void my_strncpy(char *dest, const char *src, size_t n) {
    // Copy at most n characters from src to dest
    while (n > 0 && *src != '\0') {
        *dest++ = *src++;
        n--;
    }
    // Fill remaining characters in dest with null terminators
    while (n > 0) {
        *dest++ = '\0';
        n--;
    }
}

void my_strcat(char *dest, const char *src) {
    int dest_len = 0;
    // Find the length of the destination string
    while (dest[dest_len] != '\0') {
        dest_len++;
    }
    // Append characters from src to the end of dest
    int i = 0;
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    // Append null terminator to the end of the concatenated string
    dest[dest_len + i] = '\0';
}

void my_strncat(char *dest, const char *src, size_t n) {
    // Move the dest pointer to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }
    // Append at most n characters from src to the end of dest
    while (*src != '\0' && n > 0) {
        *dest++ = *src++;
        n--;
    }
    // Append null terminator to the end of the concatenated string
    *dest = '\0';
}

int main() {
    
    char source[] = "Hello, world!";
    char destination[20]; // Make sure the destination has enough space
    my_strcpy(destination, source);
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    char source2[] = "Hello, world!";
    char destination2[20]; // Make sure the destination has enough space
    size_t n = 5; // Number of characters to copy
    my_strncpy(destination2, source2, n);
    printf("Source: %s\n", source2);
    printf("Destination: %s\n", destination2);
    
    char destination3[20] = "Hello, ";
    char source3[] = "world!";
    my_strcat(destination3, source3);
    printf("Concatenated string: %s\n", destination3);
    
    char destination4[20] = "Hello, ";
    char source4[] = "world!";
    n = 3; // Number of characters to concatenate
    my_strncat(destination4, source4, n);
    printf("Concatenated string: %s\n", destination4);
    
    return 0;
    
}