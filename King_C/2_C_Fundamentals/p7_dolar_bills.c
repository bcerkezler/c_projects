#include <stdio.h>

int main() 
{
	int total,twenty,ten,five,one;
	
	printf("Enter a dollar amount: ");
	scanf("%d",&total);
	printf("\n");
	
	twenty = total / 20;
	total = total - (twenty * 20);
	
	ten = total / 10;
	total = total - (ten * 10);
	
	five = total / 5;
	total = total - (five * 5); 
	
	one = total / 1;
	
	printf("$20 bills: %d\n",twenty);
	printf("$10 bills: %d\n",ten);
	printf("$5 bills: %d\n",five);
	printf("$1 bills: %d\n",one);
	
	return 0;
}
