// Random Sentences
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int rand_select(void);

int main(void) {

    char *article[] = {"the", "a", "one", "some", "any"};
    char *noun[] = {"boy", "girl", "dog", "town", "car"};
    char *verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
    char *preposition[] = {"to", "from", "over", "under", "on"};
    char sentence[100];
    

    srand(time(NULL));

    for (int i = 1; i <= 20; i++) {
        sprintf(sentence, "%s %s %s %s %s %s.",
                article[rand_select()], noun[rand_select()], verb[rand_select()],
                preposition[rand_select()], article[rand_select()], noun[rand_select()]);
        
        sentence[0] = toupper(sentence[0]);
        printf("%s\n", sentence);
    }

    return 0;
}

int rand_select(void) {
    return rand() % 5;
}