#include <stdio.h>

int main() {

    float n, largest = 0;

    do {
        printf("Enter a number: ");
        scanf("%f", &n);

        if (n > largest) {
            largest = n;
        }

    } while (n > 0);

    printf("The largest number entered was %.2f\n", largest);

    return 0;
}
