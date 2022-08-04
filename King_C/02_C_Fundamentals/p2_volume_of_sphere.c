#include <stdio.h>
#define PI 3.14

int main() 
{
	
	
	int r = 10;
	float volume;
	
	volume = (4.0 / 3.0) * PI * r * r * r; 
	
	printf("Volume of a sphere with a 10-meter radius : %.2f\n",volume);
	
	return 0;
}
