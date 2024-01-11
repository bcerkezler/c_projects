// Prime Numbers
#include <stdio.h>
#include <math.h>

int isPrime(int);

int main(void) {
    int i;

    printf("Following numbers are prime between 1-10.000\n\n");

    for (i = 1; i <= 10000; i++) {
       if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}

int isPrime(int number) {
    int i = 2;
    int flag = 0;

    if (number == 1) {
        return 0;
    }
    
    while(i <= sqrt(number) && flag != 1) {
        if (number % i == 0) {
            flag = 1;
        }
        i++;
    }
    
    if (flag == 0) {
        return 1;
    }
    else {
        return 0;
    }
}





       