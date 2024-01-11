// Time in Seconds
#include <stdio.h>

int seconds(int hour, int minute, int second);


int main(void) {
    int hour, minute, second;
    int secondsSince12;

    printf("Enter the time as h:m:s format: ");
    scanf("%d:%d:%d", &hour, &minute, &second);

    secondsSince12 = seconds(hour, minute, second);
    printf("%d seconds since 12", secondsSince12);

    return 0;
}


int seconds(int hour, int minute, int second) {
    int result = 0;

    if (hour >= 0 && hour < 12) {
        result = hour * 3600 + minute * 60 + second;
    }
    else if (hour >= 12 && hour < 24){
        result = (hour - 12) * 3600 + minute * 60 + second;
    }
    else {
        printf("Wrong input!\n");
    }

    return result;
}



       