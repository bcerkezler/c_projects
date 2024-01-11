// example03_01.c
// Class average problem with counter-controlled iteration
#include <stdio.h>

// function main begins program execcution
int main(void) {
    // initialization phase
    int total = 0; // initialize total of grades to 0
    int counter = 1; // number of the grade to be entered next

    //processing phase
    while (counter <= 10) { // loop 10 timex
        printf("Enter grade: "); // prompt for input
        int grade = 0; // grade value
        scanf("%d", &grade); // read grade from user
        total = total + grade; // add grade to total
        counter = counter + 1; // increment counter
    } // end while

    // termination phase
    int average = total / 10; // integer division
    printf("Class average is %d\n", average); // display result

    return 0;
} // end function main