#include <stdio.h>
#include <ctype.h>

void encrypt(char *message, int shift);

int main()
{
    char msg[80], ch = '0';
    int i = 0, shift; 
    
    printf("Enter a message to be encrypted: ");
    while (ch != '\n')
    {
        scanf("%c", &ch);
        msg[i] = ch;
        i++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    
    printf("Encrypted message: ");
    encrypt(msg, shift);
    
    return 0;
}

void encrypt(char *msg, int shift)
{
    int i = 0;
    while (msg[i] != '\n')
    {
        if (isalpha(msg[i]))
        {
            if (isupper(msg[i]))
            {
                msg[i] = ((msg[i] - 'A') + shift) % 26 + 'A';
            }
            else
            {
                msg[i] = ((msg[i] - 'a') + shift) % 26 + 'a'; 
            }
        }
        printf("%c", msg[i]);
        i++;
    }
}