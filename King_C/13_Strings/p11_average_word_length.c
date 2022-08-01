#include <stdio.h>
#define MAX_LEN 100

double compute_average_word_length(const char *sentence);

int main() {

    char ch, sentence[MAX_LEN] = {0};
    int i = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
       sentence[i++] = ch;
    }

    printf("Average word length: %.1lf\n", compute_average_word_length(sentence));

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    const char *p = sentence;
    int sum = 0, wcount = 0;
    double avg;

    while (*p) {
        if (*p++ != ' ') {
            sum++;
        } else {
            wcount++;
        }
    }
    wcount++;
    
    avg = (double) sum / (double) wcount;
    return avg;
}