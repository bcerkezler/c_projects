// Fisher-Yates Shuffling Algorithm
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FACES 13
#define CARDS 52

// card structure definition
struct card {
    const char *face; // define pointer face
    const char *suit; // define pointer suit
};

typedef struct card Card; // new type name for struct card

// prototypes
void fillDeck(Card * const deck, const char *faces[], const char *suits[]);
void shuffle(Card * const deck);
void deal(const Card * const deck);

int main(void) {
    Card deck[CARDS]; // define array of Cards

    // initialize faces array of pointers
    const char *faces[] = {"Ace", "Deuce", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    
    // initialize suits array of pointers
    const char *suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    
    srand(time(NULL)); // randomize
    
    fillDeck(deck, faces, suits); // load the deck with Cards
    shuffle(deck); // put Cards in random order
    deal(deck); // deal all 52 Cards

    return 0;
}

// place strings into Card structures
void fillDeck(Card * const deck, const char *faces[], const char *suits[]) {
    // loop through deck
    for (size_t i = 0; i < CARDS; i++) {
        deck[i].face = faces[i % FACES];
        deck[i].suit = suits[i / FACES];
    }
}

// Fisher-Yates shuffle
void shuffle(Card * const deck) {
    // loop through deck from the end to the beginning
    for (size_t i = CARDS - 1; i > 0; i--) {
        // generate a random index between 0 and i (inclusive)
        size_t j = rand() % (i + 1);
        
        // swap the current card with the randomly selected card
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

// deal cards
void deal(const Card * const deck) {
    // loop through deck
    for (size_t i = 0; i < CARDS; i++) {
        printf("%5s of %-8s%s", deck[i].face, deck[i].suit,
           (i + 1) % 4 ? " " : "\n");        
    }
}
