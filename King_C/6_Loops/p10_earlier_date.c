#include <stdio.h>

int main()
{
	int day, month, year, mind, minm, miny;

	printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    mind = day;
	minm = month;
	miny = year;

	do {
	    printf("Enter a date (mm/dd/yy): ");
	    scanf("%d/%d/%d", &month, &day, &year);

	    if (day != 0 || month != 0 || year != 0) {
	        if (year < miny) {
                mind = day;
	            minm = month;
	            miny = year;
	        } else if (miny < year){}
	          else if (month < minm) {
                mind = day;
	            minm = month;
	            miny = year;
	        } else if (minm < month){}
	          else if (day < mind) {
                mind = day;
	            minm = month;
	            miny = year;
	          } else if (mind < day){}

      }

	} while (day != 0 || month != 0 || year != 0);

	printf("%d/%d/%.2d is the earliest date.\n", minm, mind, miny);

	return 0;
}
