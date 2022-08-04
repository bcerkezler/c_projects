#include <stdio.h>

int main() {

    int i, n, day, start;

    printf("Enter number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1-Sun, 7-Sat): ");
    scanf("%d", &start);

    for (i = 1, day = 1; i <= n + start - 1; i++) {
        if (i < start) {
            printf("   ");
        }
        else {
            printf("%3d", day++);
        }

        if (i % 7 == 0)
            printf("\n");
    }

    printf("\n");
}
