#include <stdio.h>

int main() {

    int num, remain, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        remain = num % 10;
        num /= 10;
        rev = (rev * 10) + remain;
    } while(num != 0);

    printf("The reversal is %d\n", rev);

    return 0;
}
