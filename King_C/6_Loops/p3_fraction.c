#include <stdio.h>

int main() {

    int nom, denom, m, n, rem;

    printf("Enter a fraction: ");
    scanf("%d/%d", &nom, &denom);

    if (nom > denom) {
        m = nom;
        n = denom;
    } else {
        m = denom;
        n = nom;
    }

    while (n != 0) {
        rem = m % n;
        m = n;
        n = rem;
    }

    printf("In lowest terms: %d/%d\n", nom/m, denom/m);

    return 0;
}
