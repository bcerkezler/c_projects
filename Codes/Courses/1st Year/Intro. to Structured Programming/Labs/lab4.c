#include <stdio.h>
 

int isLightBulbOn(int buttons[], int n, int energy, int count)
{
    if (count == 3 && energy == 0) {
        return 1;
    }
 
    if (count == 3 || n == 0 || energy < 0) {
        return 0;
    }
 
    return isLightBulbOn(buttons, n - 1, energy - buttons[n - 1], count + 1) || 
           isLightBulbOn(buttons, n - 1, energy, count);
}
 
int main()
{
    int buttons[40];
    int energy, n, i;
 
    printf("Buton sayisini girin: ");
    scanf("%d", &n);
    printf("Buton degerlerini girin\n");
    for (i = 0; i < n; i++)
    {
        printf("Buton %d: ", i+1);
        scanf("%d", &buttons[i]);
    }
    printf("Gereken enerjiyi girin: ");
    scanf("%d", &energy);
    
 
    isLightBulbOn(buttons, n, energy, 0) ? printf("\nAmpul Yanar.") : printf("\nAmpul Yanmaz.");
 
    return 0;
}