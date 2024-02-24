// Command-Line Arguments
#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *f1, *f2;
    char text[100];
    char c;
    int i = 0;

    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "w");

    while ((c = fgetc(f1)) != EOF) {
        text[i++] = c;
    }

    text[i] = '\0';
    i--;

    while (i >= 0) {
        fputc(text[i], f2);
        i--;
    }
    
    fclose(f1);
    fclose(f2);

    return 0;
}