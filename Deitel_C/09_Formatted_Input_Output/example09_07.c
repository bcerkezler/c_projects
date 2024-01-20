// Right- and left-aligning values
#include <stdio.h>

int main(void) {    
    puts("1234567890123456789012345678901234567890");
    printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
    puts("1234567890123456789012345678901234567890");
    printf("%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23);

    return 0;
}

