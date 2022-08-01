#include <stdio.h>

#define MAX_LEN 100

void reverse(char *message);

int main(void) {
    
    char message[MAX_LEN] = {0};
    char c, *p = message;

    printf("Enter a message: ");

    while ((c = getchar()) != '\n' && p < message + MAX_LEN) {
        *p++ = c;
    }

    printf("Reversal is: ");
    reverse(message);
    printf("\n");

    return 0;
}

void reverse(char *message)
{
    char *p, *q, temp;
    int i = 0;
    p = q = message;

    while (*q)
        q++;
    q--;

    while (p < q) {
        temp = *p;
        *p = *q;
        *q = temp;
        p++; q--; 
    }
    while (message[i] != '\0') {
        printf("%c", message[i++]);
    }    
}