// Exercise 4.37
// Remove the continue statement
#include <stdio.h>

int main() { 
    
    for (int x = 1; x <= 10; ++x) {
        if (x != 5) { printf("%d ", x); }
        
    }

    printf("\nUsed continue to skip printing the value 5");
}