// Exercise 4.33
// Roman-Numeral Equivalent of Decimal Values
#include <stdio.h>

int main() { 
     
    int decimal, counter, i;

    printf("\nEnter a decimal number between 1 and 100: ");
    scanf("%d", &decimal);
    puts("");
    printf("It's roman-numeral equivalent is ");

    if (decimal == 100) {
        printf("C");
    }
    else {
        if (decimal / 50 != 0) {
            printf("L");
            decimal -= 50;
        }

        while (decimal != 0) {
            if (decimal / 10 != 0) {
                printf("X");
                decimal -= 10;
            }
            else if (decimal / 5 != 0) {
                printf("V");
                decimal -= 5;
            }
            else {
                printf("I");
                decimal -= 1;
            }
        
        } 
    }
    

    puts("\n");

    
    return 0;
}