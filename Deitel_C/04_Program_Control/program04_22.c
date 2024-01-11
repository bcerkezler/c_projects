// Exercise 4.22
// Counting letter grades with switch.
// (Modified)
#include <stdio.h>
#include <math.h>

int main() {
    
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
    double averageGrade;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade = 0;

    while ((grade = getchar()) != EOF) {
        switch (grade) {
            case 'A':
            case 'a':
                ++aCount;
                break;
            case 'B':
            case 'b':
                ++bCount;
                break;
            case 'C':
            case 'c':
                ++cCount;
                break;
            case 'D':
            case 'd':
                ++dCount;
                break;
            case 'F':
            case 'f':
                ++fCount;
                break;
            case '\n':
            case '\t':
            case ' ':
                break;
            default:
                printf("Incorrect letter grade entered.");
                puts(" Enter a new grade.");
                break;
        }
    }

    puts("\nTotals for each letter grade are:");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);

    averageGrade = 
        ( 4 * aCount + 3 * bCount + 2 * cCount + dCount  ) / 
        ( aCount + bCount + cCount + dCount + fCount );

    if (averageGrade > 3.4) {
        printf("Average grade is A\n");
    }
    else if (averageGrade > 2.4) {
        printf("Average grade is B\n");
    }
    else if (averageGrade > 1.4) {
        printf("Average grade is C\n");
    }
    else if (averageGrade > 0.4) {
        printf("Average grade is D\n");
    }
    else {
        printf("Average grade is F\n");
    }

    return 0;
}