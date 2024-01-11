//BBG Odev Q2 Code
#include<stdio.h>

int main(){

 int a = 1 , cube = 1 , min , max ;	
	
	
	while( (cube % 1000) == cube )
	{
		a++;
	    cube = a*a*a;
	}
	min = cube;
	
	while( (cube % 10000) == cube )
	{
		a++;
		cube = a*a*a;
	}
	a = a-1;
	max = a*a*a;
	
	printf("min: %d  max: %d ", min, max);
	
	
return 0;
}
