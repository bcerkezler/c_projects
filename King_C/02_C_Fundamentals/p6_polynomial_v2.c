#include <stdio.h>

int main()
{
	int x,solution;
	
	printf("Enter a value x: ");
	scanf("%d",&x);
	
	solution = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	
	printf("value of P(x) : %d\n",solution); 
	
	return 0;
}
