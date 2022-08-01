#include <stdio.h>

int main() {

    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0) {
          printf("\nPress Enter to continue...\n");
          getchar();
        }
    }
    return 0;
}