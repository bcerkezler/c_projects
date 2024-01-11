// Exercise 4.21
// Counter-controlled iteration with the for statement.
// (Rewrite)
#include <stdio.h>

int main() {

    int counter = 1;

    for (; counter <= 5; ++counter) {
        printf("%d ", counter);
    }
    
    printf("\n%d", counter);

}