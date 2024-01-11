// Exercise 3.47
// Enforcing Privacy with Cryptography
#include <stdio.h>

int main(void) {
    
    int data;
    int encr_data, decr_data;
    int choice;
    int digit_1, digit_10, digit_100, digit_1000;
    int tmp;

    printf("--Encryptor/Decryptor--\n\n");

    printf("Press 1 to encrypt, 2 to decrypt, 0 to exit: ");
    scanf("%d", &choice);

    while (choice != 0) {
        
        printf("\nEnter data for encryption/decryption: ");
        scanf("%d", &data);

        digit_1 = data % 10;
        digit_10 = data / 10 % 10;
        digit_100 = data / 100 % 10;
        digit_1000 = data / 1000;
        
        if (choice == 1) {
            
            digit_1 = (digit_1 + 7) % 10;
            digit_10 = (digit_10 + 7) % 10;
            digit_100 = (digit_100 + 7) % 10;
            digit_1000 = (digit_1000 + 7) % 10;

            tmp = digit_1000;
            digit_1000 = digit_10;
            digit_10 = tmp;

            tmp = digit_100;
            digit_100 = digit_1;
            digit_1 = tmp;

            encr_data = (1000 * digit_1000) + 
                        (100 * digit_100) + 
                        (10 * digit_10) + (digit_1);

            printf("Encrypted data: %d\n", encr_data); 
        }
        else if (choice == 2) {
            
            tmp = digit_1000;
            digit_1000 = digit_10;
            digit_10 = tmp;

            tmp = digit_100;
            digit_100 = digit_1;
            digit_1 = tmp;

            if (digit_1000 >= 7)
                digit_1000 - 7; 
            else
                (digit_1000 + 10) - 7;
            
            if (digit_100 >= 7)
                digit_100 - 7;
            else
                (digit_100 + 10) - 7;
            
            if (digit_10 >= 7)
                digit_10 - 7;
            else
                (digit_10 + 10) - 7;
            
            if (digit_1 >= 7)
                digit_10 - 7;
            else
                (digit_10 + 10) - 7;

            decr_data = (1000 * digit_1000) + 
                        (100 * digit_100) + 
                        (10 * digit_10) + (digit_1);

            printf("Decrypted data: %d\n", decr_data); 
        }
        else
            puts("Invalid choice!");

        printf("\nPress 1 to encrypt, 2 to decrypt, 0 to exit: ");
        scanf("%d", &choice);
    }
    
    
}




