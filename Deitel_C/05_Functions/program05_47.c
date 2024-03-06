// Craps Game Modification
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time

enum Status {CONTINUE, WON, LOST}; // constants represent game status

int rollDice(void); // rollDice function prototype
enum Status craps( void );
void chatter( void );

int main(void) {
    enum Status result;     /* result of current game */
    int wager = 0;          /* wager for current game */
    int bankBalance = 1000; /* current bank balance */
    
    srand(time(NULL)); // randomize based on current time

    /* display current balance and prompt for wager */
    printf( "You have $%d in the bank.\n", bankBalance );
    printf( "Place your wager: " );
    scanf( "%d", &wager );

    /* loop while not valid wager */
    while (wager <= 0 || wager > 1000 ) {
        printf( "Please bet a valid amount.\n" );
        scanf( "%d", &wager );
    }

    result = craps(); /* play game of craps */

    if (result == LOST)
    {
        /* decrease balance by wager and display new balance */
        bankBalance -= wager;
        printf( "Your new bank balance is $%d\n", bankBalance );

        if (bankBalance == 0) {
           printf( "Sorry. You are Busted! Thank You For Playing.\n" );
        }
        
    }
    else { /* player won game */
        /* increase balance by wager and display new balance */
        bankBalance += wager;
        printf( "Your new bank balance is $%d\n", bankBalance );

    }
    
    return 0;
}

// roll dice, calculate sum and display results
int rollDice(void) {
    int die1 = 1 + (rand() % 6); // pick random die1 value
    int die2 = 1 + (rand() % 6); // pick random die2 value

    // display results of this roll
    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2; // return sum of dice
}

/* craps plays one game of craps, returns result of game */
enum Status craps( void ) {
    enum Status gameStatus; // may be CONTINUE, WON, or LOST
    int sum; // current roll of dice
    int myPoint; // player must make this point to win

    sum = rollDice(); /* first roll of dice */

    // determine game status based on sum of dice
    switch(sum) {
        // win on first roll
        case 7: // 7 is a winner
        case 11: // 11 is a winner
            gameStatus = WON;
            chatter();
            break;
        // lose on first roll
        case 2: // 2 is a loser
        case 3: // 3 is a loser
        case 12: // 12 is a loser
            gameStatus = LOST;
            chatter();
            break;
        // remember point
        default:
            gameStatus = CONTINUE; // player should keep rolling
            myPoint = sum; // remember the point
            printf("Point is %d\n", myPoint);
            chatter();
            break; // optional
    }

    // while game not complete
    while (CONTINUE == gameStatus) {
        chatter();
        sum = rollDice(); // roll dice again
        
        // determine game status
        if (sum == myPoint) { // win by making point
            gameStatus = WON;
        }
        else if (7 == sum) { // lose by rolling 7
            gameStatus = LOST;
        }
    }

    // display won or lost message
    if (WON == gameStatus) { // did player win?
        puts("Player wins");
    }
    else { // player lost
        puts("Player loses");
    }
}

void chatter( void ) {
    int select; /* random number */

    select = 1 + rand() % 6;

    /* choose message at random */
    switch (select)
    {
    case 1:
        printf( "Oh, you're going for broke, huh?\n" );
        break;
    case 2:
        printf( "Aw cmon, take a chance!\n" );
        break;
    case 3:
        printf( "Hey, I think this guy is going to break the bank!!\n" );
        break;
    case 4:
        printf( "You're up big. Now's the time to cash in your chips!\n" );
        break;
    case 5:
        printf( "Way too lucky! Those dice have to be loaded!\n" );
        break;
    case 6:
        printf( "Bet it all! Bet it all!\n" );
        break;
    }
}