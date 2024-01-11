// Exercise 3.31
// Another Dangling-Else Problem
#include <stdio.h>

int main(void) {
    
    int x, y;

    x = 5; y = 8; 
    if (y == 8) {
        if (x == 5)
            puts("@@@@@");
        else
            puts("#####");
    }
    puts("$$$$$");
    puts("&&&&&");
    puts("");

    x = 5; y = 8; 
    if (y == 8) {
        if (x == 5)
            puts("@@@@@");
    }
    else {
        puts("#####");
        puts("$$$$$");
        puts("&&&&&");
    }
    puts("");

    x = 5; y = 8; 
    if (y == 8) {
        if (x == 5)
            puts("@@@@@");
    }
    else {
        puts("#####");
        puts("$$$$$");
    }
    puts("&&&&&");
    puts("");

    x = 5; y = 7; 
    if (y == 8) {
        if (x == 5)
            puts("@@@@@");
    }
    else {
        puts("#####");
        puts("$$$$$");
        puts("&&&&&");
    }
    

    return 0;
}   