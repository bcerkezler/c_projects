#include <stdio.h>

int main() {
	
	int num, rev, digit100, digit10, digit1;
	
	printf("Enter a three digit number: ");
	scanf("%d", &num);
	
	digit1 = num % 10;
	digit10 = ((num - (num % 10)) / 10 ) % 10;
	digit100 = ((num - (num % 100)) / 100) % 10;
	
	rev = (digit1 * 100) + (digit10 * 10) + (digit100);
	printf("The reversal is: %d", rev);
	
	
	return 0;
}
