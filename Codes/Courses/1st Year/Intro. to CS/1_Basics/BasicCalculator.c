/*Basic_Calculator 1.0*/
#include<stdio.h>

int main() {
	
	char keyword;
	float num1,num2,add,sub,mlt,div;
	
	
	printf("Welcome to the Basic Calculator!\n");
	printf("Keywords:'A' for Addition\n'S' for Substraction\n'M' for Multiplication\n'D' for Division\n\n");
	
	printf("Please enter your keyword: "); scanf("%c",&keyword);
	
	printf("Please enter two numbers\n");
	printf("First number: ");scanf("%f",&num1);
	printf("Second number: ");scanf("%f",&num2);
	printf("\n\n");
	
	if(keyword=='A') {
		add=num1+num2;
		printf("Addition of two numbers: %.2f\n",add);
	}
	else{
		if(keyword=='S'){
			sub=num1-num2;
			printf("Substraction of two numbers: %.2f\n",sub);
		}
		else{
			if(keyword=='M'){
				mlt=num1*num2;
				printf("Multiplication of two numbers: %.2f\n",mlt);
			}
			else{
				 if(keyword=='D'){
				 	div=num1/num2;
				 	printf("Division of two numbers: %.2f\n ",div);
				 }
				 else{
				 	printf("Wrong Keyword!");
				 }
			}
		}
		
		
	}   
	
	
	
	
	
	
	return 0;
}
