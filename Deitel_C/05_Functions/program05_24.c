// Temperature Conversions
#include <stdio.h>

int toCelsius(int);
int toFahrenheit(int);


int main(void) {
    int i, count = 0;
    
    for (i = 0; i <= 100; i++) {
        printf("%d 'C -- %d 'F |  ", i, toFahrenheit(i));
        count++;
        if (count == 3) {
            puts("");
            count = 0;
        }
    }
    
    count = 0;
    puts("");

    for (i = 32; i < 212; i++) {
        printf("%d 'F -- %d 'C |  ", i, toCelsius(i));
        count++;
        if (count == 3) {
            puts("");
            count = 0;
        }
    }
    

    return 0;
}

int toCelsius(int temp) {
    return (temp - 32) * 5 / 9;
}

int toFahrenheit(int temp) {
    return (9 * temp / 5) + 32;
}



       