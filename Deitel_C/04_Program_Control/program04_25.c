// Exercise 4.25
// Table of Decimal, Binary, Octal and Hexadecimal Equivalents
#include <stdio.h>

int main() {
    
    int tmp_decimal;
    int binary = 0;
    int remainder;
    int digit = 1; 
    
    printf("\nDecimal\tBinary\t\tOctal\tHexadecimal\n");
    
    for (int i = 1; i <= 256; i++) {
        
        tmp_decimal = i;
        
        while (tmp_decimal != 0) {
            
            remainder = tmp_decimal % 2;
            binary += (remainder * digit);
            digit *= 10;
            tmp_decimal /= 2;
        
        }
        
        printf("%d\t%d\t\t%o\t%x\n", i, binary, i, i);
        
        digit = 1;
        binary = 0;
        
    }
    
    puts(" ");
   

    return 0;
}