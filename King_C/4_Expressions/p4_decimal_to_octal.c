#include <stdio.h>

int main() {
	
	int num, octal, digit1, digit2, digit3, digit4, digit5;
	
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);
	
	digit5 = num % 8; 
	num = num / 8;
	digit4 = num % 8;
	num = num / 8;
	digit3 = num % 8;
	num = num / 8;
	digit2 = num % 8;
	num = num / 8;
	digit1 = num % 8;
	
	octal = (digit1 * 10000) + (digit2 * 1000) + (digit3 * 100) + (digit4 * 10) + (digit5);
	
	printf("In octal, your number is: %.5d", octal);
	
	return 0;
}
