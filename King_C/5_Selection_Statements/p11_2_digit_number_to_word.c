#include <stdio.h>

int main() 
{
	int number, digit10, digit1;
	
	printf("Enter a two-digit number: ");
	scanf("%d", &number);
	
	
	digit10 = number / 10;
	digit1 = number % 10;
    	
	if (number >= 10 && number <= 19) {
		switch (number) {
			case 10: printf("You entered the number ten."); break;
			case 11: printf("You entered the number eleven."); break;
			case 12: printf("You entered the number twelve."); break;
			case 13: printf("You entered the number thirteen."); break;
			case 14: printf("You entered the number fourteen."); break;
			case 15: printf("You entered the number fifteen."); break;
			case 16: printf("You entered the number sixteen."); break;
			case 17: printf("You entered the number seventeen."); break;
			case 18: printf("You entered the number eighteen."); break; 
			case 19: printf("You entered the number nineteen."); break;	 
		}
	} else {
		switch (digit10) {
			case 2: printf("You entered the number twenty"); break;
			case 3: printf("You entered the number thirty"); break;
			case 4: printf("You entered the number forty"); break;
			case 5: printf("You entered the number fifty"); break;
			case 6: printf("You entered the number sixty"); break;
			case 7: printf("You entered the number seventy"); break;
			case 8: printf("You entered the number eighty"); break;
			case 9: printf("You entered the number ninety"); break;
		}
		switch (digit1) {
			case 0: printf("\n"); break;
			case 1: printf("-one\n"); break;
			case 2: printf("-two\n"); break;
			case 3: printf("-three\n"); break;
			case 4: printf("-four\n"); break;
			case 5: printf("-five\n"); break;
			case 6: printf("-six\n"); break;
			case 7: printf("-seven\n"); break;
			case 8: printf("-eight\n"); break;
			case 9: printf("-nine\n"); break;
		}
	}
	
	
	
	return 0;
}
