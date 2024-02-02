// Using the exit and atexit functions
#include <stdio.h>
#include <stdlib.h>

void print(void); // prototype

int main(void) {
    atexit(print); // register function print
    puts("Enter 1 to terminate program with function exit\n"
         "Enter 2 to terminate program normally");
    int answer = 0; //user
    scanf("%d", &answer);

    // call exit if answer is 1
    if (answer == 1) {
        puts("\nTerminating program with function exit");
        exit(EXIT_SUCCESS);
    }

    puts("\nTerminating program by reaching the end of main");

    return 0;
}

// display message before termination
void print(void) {
    puts("Executing function print at program termination\n"
         "Program terminated");
}
