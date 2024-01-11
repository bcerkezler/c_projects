// Exercise 4.27
// Pythagorean Triples
#include <stdio.h>

int main(void) {
    
    int side1, side2, hypotenuse;

    puts("");
    printf("side1\tside2\thypotenuse\n\n");

    for (side1 = 1; side1 < 500; side1++) {
        for (side2 = 1; side2 < 500; side2++) {
            for (hypotenuse = 1; hypotenuse < 500; hypotenuse++) {
                if ((side1 * side1) + (side2 * side2) == (hypotenuse * hypotenuse)) {
                   printf("%d\t%d\t%d\n", side1, side2, hypotenuse); 
                }
            }
            
        }
        
    }
    

    return 0;
}