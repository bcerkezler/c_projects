#include <stdio.h>

int main() 
{
	int number, digit10, digit1;
	char *teens[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"}, 
         *tens[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}, 
         *ones[9] = {"-one", "-two", "-three", "-four", "-five", "-six", "-seven", "-eight", "-nine"};

	printf("Enter a two-digit number: ");
	scanf("%d", &number);
	
	digit10 = number / 10;
	digit1 = number % 10;

    if (number >= 10 && number <= 19) {
        printf("You entered the number %s\n", teens[digit1]);
    }
   else {
       printf("You entered the number %s%s\n", tens[digit10-2], ones[digit1-1]);
   }

   return 0;
}