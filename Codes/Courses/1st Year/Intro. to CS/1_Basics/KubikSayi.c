//Cubic number problem
#include<stdio.h>

int main(){

	int n,b,o,y,cubic;

	printf("Please enter a three digit number: ");scanf("%d",&n);
	printf("\n");

	b = n % 10;
	o = (n / 10) % 10;
	y = n / 100;

	cubic=(b*b*b)+(o*o*o)+(y*y*y);

	if(cubic==n)
		printf("Cubic");
	else
	    printf("Not Cubic");


	return 0;
}
