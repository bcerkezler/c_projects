// Perfect Numbers
#include <stdio.h>

int isPerfect(int);

int main(void) {
    int i, j, last = 0;

    for (i = 1; i <= 1000; i++) {
       if (isPerfect(i)) {
        printf("%d = ", i);
        for (j = i/2; j >= 1; j--) {
            if (j == 1) { last = 1; }
            if (i % j == 0) {
                if (last == 0) {
                    printf("%d + ", j);
                }
                else {
                    printf("%d", j);
                }
            }
        }
        last = 0;
        puts("");
       }
    }
    

}

int isPerfect(int number) {
    int i, j, tmp, sum = 0;

    tmp = number/2;

    while (tmp >= 1) {
        if (number % tmp == 0) {
            sum += tmp;
        }
        tmp--;
    }

    if (sum == number) {
        return 1;
    }
    else {
        return 0;
    } 
}





       