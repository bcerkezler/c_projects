// Guess the Number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    
    int number;
    int guess;
    int continueFlag = 1;
    char choice;

    srand(time(NULL));
    
    do {
        number = rand() & 1000 + 1;
        puts("I have a number between 1 and 1000.");      
        puts("Can you guess my number?");
        puts("Please type your first guess.");
        scanf("%d", &guess);

        while (guess != number) {
            if (guess > number) {
                puts("Too high. Try again.");
            }
            else {
                 puts("Too low. Try again.");
            }
            scanf("%d", &guess); 
        }
        
        fflush(stdin);
        puts("Excellent! You guessed the number!");
        puts("Would you like to play again (y or n)?");
        choice = getchar();
        
        if (choice == 'n') {
            continueFlag = 0;
        }
    } while (continueFlag != 0);

    return 0;

}

