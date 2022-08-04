#include <stdio.h>

int main() {

    char indicator;
    int hour, minute;

    printf("Enter a 12-hour time: ");
    scanf("%d :%d %c", &hour, &minute, &indicator);

    if(indicator == 'P') {
        hour += 12;
        printf("Equivalent 24-hour time: %.2d:%.2d", hour, minute);
    } else if (hour == 12 && indicator == 'A') {
        printf("Equivalent 24-hour time: 00:%.2d", minute);
    } else {
        printf("Equivalent 24-hour time: %.2d:%.2d", hour, minute);
    }
    
    return 0;
}