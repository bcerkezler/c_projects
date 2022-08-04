#include <stdio.h>

int main() 
{
	float money,final;
	
	printf("Enter an amount: ");
	scanf("%f",&money);
	
	
	final = money + (money * 5.0 / 100.0);
	
	printf("With tax added: %.2f",final);
	
	return 0;
}
