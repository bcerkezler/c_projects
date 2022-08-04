#include <stdio.h>
#define PI 3.14

int main() 
{
	
	int r;
	float volume;
	
	printf("Please enter a radius value: ");
	scanf("%d",&r);
	
	volume = (4.0 / 3.0) * PI * r * r * r; 
	
	printf("Volume of a sphere with a 10-meter radius : %.2f\n",volume);
	
	return 0;
}
