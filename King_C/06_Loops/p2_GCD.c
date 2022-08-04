#include <stdio.h>

int main() {

    int int1, int2, m, n, rem;

    printf("Enter two integers: ");
    scanf("%d%d", &int1, &int2);

    if (int1 > int2) {
        m = int1;
        n = int2;
    } else {
        m = int2;
        n = int1;
    }

    while (n != 0) {
        rem = m % n;
        m = n;
        n = rem;
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;

}
