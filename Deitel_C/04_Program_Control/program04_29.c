// Exercise 4.29
// De Morgan’s Laws
#include <stdio.h>

int main(void) {
    
    int x = 1, y = 2; 
    int a = 3 ,b = 3, g = 4; 
    int i = 5, j = 6;

    printf("\n%d is equivalent to ", !(x < 5) && !(y >= 5));
    printf("%d\n",!(x < 5 || y >= 5));
    printf("%d is equivalent to ", !(a == b) || !(g != 5));
    printf("%d\n",!(a == b && g != 5));
    printf("%d is equivalent to ", !(x <= 8 && y > 4));
    printf("%d\n",!(x <= 8) || !(y > 4));
    printf("%d is equivalent to ",!(i > 4 || j <= 6));
    printf("%d\n",!(i > 4) && !(j <= 6));


    return 0;
}