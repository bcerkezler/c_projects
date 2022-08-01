#include <stdio.h>

int main() {
	
	int num, rev, digit100, digit10, digit1;
	
	printf("Enter a three digit number: ");
	scanf("%ld%ld%ld", &digit100, &digit10, &digit1);
	
	rev = (digit1 * 100) + (digit10 * 10) + (digit100);
	printf("The reversal is: %d", rev);
	
	
	return 0;
}
