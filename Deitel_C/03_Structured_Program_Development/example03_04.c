// example03_04.c
// Preincrementing and postincrementing
#include <stdio.h>

// function main begins program execcution
int main(void) {
    // demonstrate postincrement
    int c = 5; // assign 5 to c
    printf("%d\n", c); // print 5 
    printf("%d\n", c++); // print 5 then postincrement
    printf("%d\n\n", c); // print 6

    // demonstrate preincrement
    c = 5; // assign 5 to c
    printf("%d\n", c); // print 5 
    printf("%d\n", ++c); // print 5 then postincrement
    printf("%d\n", c); // print 6
    
    return 0;
} // end function main