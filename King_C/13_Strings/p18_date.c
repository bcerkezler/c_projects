#include <stdio.h>

int main()
{
    char *months[] = {"January", "February", "March", "April", "May",
                      "June", "July", "August", "September", 
                      "October", "November", "December"};
    int mon, day, year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d / %d / %d", &mon, &day, &year);

    printf("You entered the date %s %d, %d", months[mon-1], day, year);
    return 0;
}   
