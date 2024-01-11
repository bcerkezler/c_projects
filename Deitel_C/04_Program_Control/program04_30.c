// Exercise 4.30
// Replacing switch with if…else
#include <stdio.h>
#include <math.h>

int main() {
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade = 0;

    while ((grade = getchar()) != EOF) {
        
        if (grade == '\n' || grade == '\t' || grade == ' ')
            continue;
        if (grade == 'A' || grade == 'a')
                ++aCount;
        if (grade == 'B' || grade == 'b')
                ++bCount;
        if (grade == 'C' || grade == 'c')
                ++cCount;
        if (grade == 'D' || grade == 'd')
                ++dCount;
        if (grade == 'F' || grade == 'f')
                ++fCount;
        
        if (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F'
            && grade != 'a' && grade != 'b' && grade != 'c' && grade != 'd' && grade != 'f') {  
                printf("Incorrect letter grade entered.");
                puts(" Enter a new grade.");
        }
    }

    puts("\nTotals for each letter grade are:");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);
}