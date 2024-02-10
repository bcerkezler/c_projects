// Recursive main
#include <stdio.h>

int main(void) {
    static int count = 1;
    printf("Main %d\n", count++);
    main();
}