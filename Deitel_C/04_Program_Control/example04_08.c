// Using the continue statement in a for statement.
#include <stdio.h>

int main() { 
    
    for (int x = 1; x <= 10; ++x) {
        if (x == 5) { continue; }
        printf("%d ", x);
    }

    printf("\nUsed continue to skip printing the value 5");
}