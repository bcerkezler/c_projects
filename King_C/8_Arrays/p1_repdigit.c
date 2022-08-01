#include <stdbool.h>
#include <stdio.h>

int main()
{
    bool digit_seen[10] = {false};
    int digit, flag = 0;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    printf("Repeated digit(s):");
    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
           printf(" %d", digit);
           flag = 1;
        }    
        digit_seen[digit] = true;
        n /= 10;    
    }
    if(flag == 1)
       printf("\n");
    else
       printf(" No repeated digits.\n");
          
    return 0;      
}