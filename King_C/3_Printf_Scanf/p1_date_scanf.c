#include <stdio.h>

int main() 
{
	int day, month, year;
	
	printf("Enter a date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	printf("\nYou entered the date %d%.2d%.2d", year, month, day);
	
	return 0;	
}
