#include <stdio.h>


int main() {

    char ch;
    int sum = 0, wcount = 0;
    float avg;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch != ' ') {
            sum++;
        } else {
            wcount++;
        }
    }

    wcount++;
    avg = (float) sum / (float) wcount;
    printf("Average word length: %.1f\n", avg);



    return 0;
}
