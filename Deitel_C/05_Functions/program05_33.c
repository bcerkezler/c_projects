// Guess the Number Modification
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    
    int number;
    int guess;
    int continueFlag = 1;
    int count;
    char choice;

    srand(time(NULL));
    
    do {
        number = rand() & 1000 + 1;
        puts("I have a number between 1 and 1000.");      
        puts("Can you guess my number?");
        puts("Please type your first guess.");
        scanf("%d", &guess);
        count = 1;

        while (guess != number) {
            if (guess > number) {
                puts("Too high. Try again.");
            }
            else {
                 puts("Too low. Try again.");
            }
            scanf("%d", &guess);
            count++; 
        }
        
        fflush(stdin);
        puts("Excellent! You guessed the number!");
        if (count == 10) {
            puts("Aha! You know the secret!");
        }
        else if (count < 10) {
            puts("Either you know the secret or you got lucky!");
        }
        else {
            puts("You should be able to do better!");
        }
        
        puts("Would you like to play again (y or n)?");
        choice = getchar();
        
        if (choice == 'n') {
            continueFlag = 0;
        }
    } while (continueFlag != 0);

    return 0;

}