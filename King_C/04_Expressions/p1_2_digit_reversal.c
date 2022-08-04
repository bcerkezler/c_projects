#include <stdio.h>

int main() {
	
	int num, rev, digit10, digit1;
	
	printf("Enter a two digit number: ");
	scanf("%d", &num);
	
	digit1 = num % 10;
	digit10 = (num - (num % 10) ) / 10;
	
	rev = (digit1 * 10) + digit10;
	printf("The reversal is: %d", rev);
	
	
	return 0;
}
