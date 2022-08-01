#include <stdbool.h>
#include <stdio.h>

int main()
{
    bool digit_seen[10] = {false};
    int digit, i;
    long n, tmp;

    printf("Enter a number: ");
    scanf("%ld", &n);
    while (n > 0) {
        tmp = n;
        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit])
              break;
            digit_seen[digit] = true;
            n /= 10;    
        }
    
        if(n > 0)
            printf("Repeated digit.\n");
        else
            printf("No repeated digit\n");
        
        n = tmp;
        for (i = 0; i < 10; i++) {
            digit_seen[i] = false;
        }
        
        printf("\nEnter a number: ");
        scanf("%ld", &n);
    }     
    return 0;      
}