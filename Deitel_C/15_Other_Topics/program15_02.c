// Variable-Length Argument List: Calculating Products
#include <stdio.h>
#include <stdarg.h>

int product(int i, ...); 

int main(void) {
    int w = 10;
    int x = 12;
    int y = 25;
    int z = 36;

    printf("%s%d; %s%d; %s%d; %s%d\n\n",
       "w = ", w, "x = ", x, "y = ", y, "z = ", z);
    printf("%s%d\n%s%d\n%s%d\n",
       "The product of w and x is ", product(2, w, x),
       "The product of w, x and y is ", product(3, w, x, y),
       "The product of w, x, y  and z is ", product(4, w, x, y, z));

    return 0;
}

int product(int i, ...) {
    int total = 1; 
    va_list ap; 

    va_start(ap, i); 

    for (int j = 1; j <= i; j++) {
        total *= va_arg(ap, int);
    }
    
    va_end(ap); 
    return total; 
}