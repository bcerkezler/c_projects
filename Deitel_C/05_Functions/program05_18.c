// Even or Odd
#include <stdio.h>

int isEven(int integer);

int main(void) {
   
    int integer;
    

    for (int i = 1; i <= 4 ; i++) {
        printf("Enter an integer: ");
        scanf("%d", &integer);

        if (isEven(integer)) {
            printf("%d is even\n\n", integer);
        }
        else {
            printf("%d is odd\n\n", integer);
        }
    }
    

    return 0;
}


int isEven(int integer) {
    
    if (integer % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }

}