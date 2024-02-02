// Using signal handling
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>

void signalHandler(int signalValue); // prototype

int main(void) {
    signal(SIGINT, signalHandler); // register signal handler
    srand(time(NULL));

    // output numbers 1 to 100
    for (int i = 1; i <= 100; i++) {
        int x = 1 + rand() % 50; // generate random number to raise SIGINT

        // raise SIGINT when x is 25
        if (x == 25) {
            raise(SIGINT);
        }

        printf("%4d", i);

        // output \n when i is a multiple of 10
        if (i % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}

// handles signal
void signalHandler(int signalValue) {
    printf("\n%s%d%s\n%s",
       "Interrupt signal (", signalValue, ") received.",
       "Do you wish to continue (1 = yes or 2 = no)? ");
    int response = 0; //user
    scanf("%d", &response);

    // check for invalid responses
    while (response != 1 && response != 2) {
       printf("%s", "(1 = yes or 2 = no)? ");
       scanf("%d", &response);
    }
    
    // determine whether to continue
    if (response == 1) {
        // reregister signal handler for next SIGINT
        signal(SIGINT, signalHandler);
    }
    else {
        exit(EXIT_SUCCESS);
    }
}
