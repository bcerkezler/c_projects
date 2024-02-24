// Card Shuffling and Dealing Modification
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FACES 13
#define CARDS 52

// bitCard structure definition with bit fields
struct bitCard {
    unsigned int face : 4; // 4 bits; 0-15
    unsigned int suit : 2; // 2 bits; 0-3
    unsigned int color : 1; // 1 bit; 0-1
};

typedef struct bitCard Card; // new type name for struct bitCard

//prototypes
void fillDeck(Card * const deck); 
void shuffle(Card * const deck);
void deal(const Card * const deck, const char *faces[], const char *suits[], const char *colors[]); 

int main(void) {
    Card deck[CARDS]; // create array of Cards

    // initialize faces array of pointers
    const char *faces[] = {"Ace", "Deuce", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    
    // initialize suits array of pointers
    const char *suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    const char *colors[] = {"Red", "Black"};

    srand(time(NULL)); // randomize

    fillDeck(deck); // load the deck with Cards
    shuffle(deck); // put Cards in random order
    deal(deck, faces, suits, colors); // deal all 52 Cards

    return 0;
}

// initialize Cards
void fillDeck(Card * const deck) {
    // loop through deck
    for (size_t i = 0; i < CARDS; ++i) {
        deck[i].face = i % (CARDS / 4);
        deck[i].suit = i / (CARDS / 4);
        deck[i].color = i / (CARDS / 2);
    }
}

// shuffle cards
void shuffle(Card * const deck) {
    // loop through deck randomly swapping Cards
    for (size_t i = 0; i < CARDS; i++) {
        size_t j = rand() % CARDS;
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}


// deal cards
void deal(const Card * const deck, const char *faces[], const char *suits[], const char *colors[]) {
    // loop through deck
    for (size_t i = 0; i < CARDS; i++) {
        printf("%-5s %-5s of %-8s%s", colors[deck[i].color], faces[deck[i].face], suits[deck[i].suit],
           (i + 1) % 2 ? "  " : "\n");        
    }
}