#include <stdio.h>

int main()
{
	float wspeed;
	
	printf("Enter a wind speed(in knots): ");
	scanf("%f", &wspeed);
	
	if (wspeed < 1.00)
	   printf("Calm");
	else if (wspeed >= 1.00 && wspeed < 4.00)
	    printf("Light air");
	else if (wspeed >= 4.00 && wspeed < 28.00)
	    printf("Breeze");
	else if (wspeed >= 28.00 && wspeed < 48.00)
	    printf("Gale");
	else if (wspeed >= 48.00 && wspeed < 63.00)
	    printf("Storm");    
	else
	   printf("Hurricane");
	    
	      
	return 0;
}
