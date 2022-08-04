#include <stdio.h>
#define SIZE 15

int main() {

    char ch, ph_no[SIZE];
    int i = 0, count;

    printf("Enter phone number: ");
    while ((ch = getchar()) != '\n')
    {
        ph_no[i] = ch;
        i++;
    }
    count = i;
    
    

    for (i = 0; i < count; i++) {
        switch (ph_no[i]) {
            case 'A': case 'B': case 'C':
                printf("2");
                break;
            case 'D': case 'E': case 'F':
                printf("3");
                break;
            case 'G': case 'H': case 'I':
                printf("4");
                break;
            case 'J': case 'K': case 'L':
                printf("5");
                break;
            case 'M': case 'N': case 'O':
                printf("6");
                break;
            case 'P': case 'R': case 'S':
                printf("7");
                break;
            case 'T': case 'U': case 'V':
                printf("8");
                break;
            case 'W': case 'X': case 'Y':
                printf("9");
                break;
           default:
                printf("%c", ph_no[i]);
                break;
        }
        
    }
    printf("\n");

    return 0;
}
