#include <stdio.h>

int main() 
{
	int num1, denom1, num2, denom2, result_num, result_denom;
    char operator;
	
	printf("Enter two fractions seperated by an operator: ");
	scanf("%d/%d %c %d/%d", &num1, &denom1, &operator, &num2, &denom2);
	
	switch(operator) {
    case '+':
             result_num = num1 * denom2 + num2 * denom1;
	         result_denom = denom1 * denom2; break;
    case '-':
             result_num = num1 * denom2 - num2 * denom1;
             result_denom = denom1 * denom2; break;
    case '*':
             result_num = num1 * num2;
             result_denom = denom1 * denom2; break;
    case '/':
             result_num = num1 * denom2;
             result_denom = denom1 * num2; break;
    default: printf("Wrong input!\n"); break;                                    
    }
	
    printf("The sum is %d/%d\n", result_num, result_denom);
	
	return 0;	
}