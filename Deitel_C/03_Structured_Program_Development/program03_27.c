// program03_27.c
// Validating User Input
#include <stdio.h>

// function main begins program execcution
int main(void) {
    // initialize variables in definitions
    int passes = 0; 
    int failures = 0; 
    int student = 1;
    int flag = 0;
    int result; 

    //process 10 students using counter-controlled loop
    while (student <= 10) {
        // prompt user for input and obtain value from user
        while(flag == 0) {
            printf("Enter result, (1=pass,2=fail) ");
            scanf("%d", &result);
            if (result == 1)
                flag = 1;
            else if (result == 2)
                flag = 1;
            else
                puts("Invalid Result!");   
        }
        
        //if result 1, increment passes
        if (result == 1) {
            passes = passes + 1;
        } // end if
        else { // otherwise, increment failures
            failures = failures + 1;
        } // end else

        student = student + 1; // increment student counter
        flag = 0;
    } // end while

    // termination phase; display number of passes and failures
    printf("Passed %d\n", passes);
    printf("Failed %d\n", failures);
    
    //if more than eight students passd, print "Bonus to instuctor!"
    if (passes > 8) {
        puts("Bonus to instructor!");
    } // end if
    return 0;
} // end function main