// Write Your String-Conversion Functions
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

double my_strtod(const char *str, char **endptr);
long my_strtol(const char *str, char **endptr, int base);
unsigned long my_strtoul(const char *str, char **endptr, int base);

int main() {
    char *str = "3.14";
    char *endptr;
    
    double num = my_strtod(str, &endptr);
    printf("Number: %f\n", num);
    printf("End pointer: %s\n", endptr);

    str = "12345";
    long num = my_strtol(str, &endptr, 10);
    printf("Number: %ld\n", num);
    printf("End pointer: %s\n", endptr);

    str = "69420";
    unsigned long num = my_strtoul(str, &endptr, 10);
    printf("Number: %lu\n", num);
    printf("End pointer: %s\n", endptr);
    
    return 0;
}

double my_strtod(const char *str, char **endptr) {
    double result = 0.0;
    int sign = 1;
    bool decimal = false;
    bool exponential = false;
    int exponent = 0;

    // Skip leading whitespaces
    while (isspace(*str))
        str++;

    // Check for sign
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    // Parse integer part
    while (isdigit(*str)) {
        result = result * 10.0 + (*str - '0');
        str++;
    }

    // Parse fractional part
    if (*str == '.') {
        str++;
        double fraction = 0.1;
        while (isdigit(*str)) {
            result += (*str - '0') * fraction;
            fraction *= 0.1;
            str++;
        }
        decimal = true;
    }

    // Parse exponent part
    if (*str == 'e' || *str == 'E') {
        str++;
        int expSign = 1;
        if (*str == '-') {
            expSign = -1;
            str++;
        } else if (*str == '+') {
            str++;
        }
        while (isdigit(*str)) {
            exponent = exponent * 10 + (*str - '0');
            str++;
        }
        exponent *= expSign;
        exponential = true;
    }

    // Apply sign
    result *= sign;

    // Apply exponent
    if (exponential) {
        result *= pow(10, exponent);
    }

    // Set end pointer if needed
    if (endptr != NULL) {
        *endptr = (char *)str;
    }

    return result;
}

long my_strtol(const char *str, char **endptr, int base) {
    long result = 0;
    int sign = 1;
    bool validInput = false;

    // Skip leading whitespaces
    while (isspace(*str))
        str++;

    // Check for sign
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    // Determine base if not provided
    if (base == 0) {
        if (*str == '0' && (*(str + 1) == 'x' || *(str + 1) == 'X')) {
            base = 16;
            str += 2;
        } else {
            base = 10;
            if (*str == '0')
                str++;
        }
    } else if (base == 16 && *str == '0' && (*(str + 1) == 'x' || *(str + 1) == 'X')) {
        str += 2;
    }

    // Parse digits
    while (isalnum(*str)) {
        validInput = true;
        int digit;
        if (isdigit(*str)) {
            digit = *str - '0';
        } else {
            digit = tolower(*str) - 'a' + 10;
        }
        if (digit >= base)
            break;
        result = result * base + digit;
        str++;
    }

    // Apply sign
    result *= sign;

    // Set end pointer if needed
    if (endptr != NULL) {
        *endptr = (char *) (validInput ? str : str - 1);
    }

    return result;
}

unsigned long my_strtoul(const char *str, char **endptr, int base) {
    unsigned long result = 0;
    bool validInput = false;

    // Skip leading whitespaces
    while (isspace(*str))
        str++;

    // Determine base if not provided
    if (base == 0) {
        if (*str == '0' && (*(str + 1) == 'x' || *(str + 1) == 'X')) {
            base = 16;
            str += 2;
        } else {
            base = 10;
            if (*str == '0')
                str++;
        }
    } else if (base == 16 && *str == '0' && (*(str + 1) == 'x' || *(str + 1) == 'X')) {
        str += 2;
    }

    // Parse digits
    while (isalnum(*str)) {
        validInput = true;
        int digit;
        if (isdigit(*str)) {
            digit = *str - '0';
        } else {
            digit = tolower(*str) - 'a' + 10;
        }
        if (digit >= base)
            break;
        result = result * base + digit;
        str++;
    }

    // Set end pointer if needed
    if (endptr != NULL) {
        *endptr = (char *) (validInput ? str : str - 1);
    }

    return result;
}