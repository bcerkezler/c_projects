#include <stdio.h>

int main()
{
	int x,solution;
	
	printf("Enter a value x: ");
	scanf("%d",&x);
	
	solution = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x)
    - (x * x) + (7 * x) - 6;
	
	printf("value of P(x) : %d\n",solution);           	  
	
	return 0;
}
