// Exercise 3.34
// Palindrome Tester
#include <stdio.h>

int main(void) {
    
    int number;
    int i = 1;
    int div;
    int flag = 0;


    printf("Enter a number (-1 to exit): ");
    scanf("%d", &number);

    div = 10000;

    while (number != -1) {
        
        while (i <= 2) {
            
            if ((number / div % 10) != (number % 10)) 
                flag = 1;
            
            div /= 100;
            number /= 10;
            i++;
        }

        if (flag == 0)
            puts("Palindrome number!");
        else
            puts("Not a palindrome number!");

        printf("\nEnter a number (-1 to exit): ");
        scanf("%d", &number);
        
        flag = 0;
        div = 10000;
        i = 1;
    }

    return 0;
}   