// Using the goto statement
#include <stdio.h>

int main(void) {
    int count = 1; // initialize count

    start: // label
        if (count > 10) {
            goto end;
        }
        
        printf("%d  ", count);
        ++count;

        goto start; // goto start on line 7

    end: //label
        putchar('\n');    

    return 0;
}

