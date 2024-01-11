// Multiples
#include <stdio.h>

int isMultiple(int first, int second);

int main(void) {
   
    int int1, int2;
    

    for (int i = 1; i <= 4 ; i++) {
        printf("Enter a pair of integers: ");
        scanf("%d%d", &int1, &int2);

        if (isMultiple(int1, int2)) {
            printf("%d is a multiple of %d\n\n", int2, int1);
        }
        else {
            printf("%d is not a multiple of %d\n\n", int2, int1);
        }
    }
    

    return 0;
}


int isMultiple(int first, int second) {
    
    if (second % first == 0) {
        return 1;
    }
    else {
        return 0;
    }

}