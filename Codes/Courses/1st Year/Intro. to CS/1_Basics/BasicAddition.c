//Addition of two numbers
#include<stdio.h>


int main() {
	
	int num1,num2,sum;
	
	printf("Please enter two integer numbers\n");
	printf("First number: "); scanf("%d",&num1);
	printf("Second number: "); scanf("%d",&num2);
	printf("\n");
	
	sum = num1 + num2;
	
	printf("Sum = %d\n",sum);
	
	
	return 0;
}
