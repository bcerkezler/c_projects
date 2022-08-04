#include <stdio.h>

int main() {
        
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        printf("%10d%10d\n", i, i * i);

    return 0;  //Smallest value of n is 46341 (32 bits for int).
}


/*    short i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%hd", &n);

    for(i = 1; i <= n; i++)
        printf("%10hd%10hd\n", i, i * i);

    return 0;  /Smallest value of n is 182 (16 bits for short).
*/    

/*     long i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);

    for(i = 1; i <= n; i++)
        printf("%10ld%10ld\n", i, i * i);

    return 0;  /Smallest value of in is 3037000500 (64 bits for long).
*/    

