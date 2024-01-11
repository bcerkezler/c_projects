// Counter-controlled iteration.
#include <stdio.h>

int main() {
    int counter = 1;

    while (counter <= 5) {
        printf("%d ", counter);
        ++counter;
    }
    
    puts("");
}