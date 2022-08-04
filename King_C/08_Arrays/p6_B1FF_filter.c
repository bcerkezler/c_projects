#include <stdio.h>
#include <ctype.h>
#define SIZE 50 

int main()
{
    char message[SIZE], ch = '0';
    int i = 0, count;
    
    printf("Enter message: ");
    while(ch != '\n')
    {
        scanf("%c", &ch);
        message[i] = ch;
        i++;
    }
    count = i;

    for (i = 0; i < count; i++)
    {
        switch (toupper(message[i]))
        {
        case 'A': message[i] = '4';
            break;
        case 'B': message[i] = '8';
            break;
        case 'E': message[i] = '3';
            break;
        case 'I': message[i] = '1';
            break;
        case 'O': message[i] = '0';
            break;
        case 'S': message[i] = '5';
            break;                
        default:  message[i] = toupper(message[i]);
            break;
        }

        printf("%c", message[i]);
    }
    printf("!!!!!!!!!!\n");

    return 0;
}