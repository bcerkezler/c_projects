/*
 * Even or odd
 * Bir sayinin tek mi cift mi oldugunu bulan program.
*/

#include<stdio.h>


 int main(){
	
	int num;
	
	
	printf("Please enter the number: ");
	scanf("%d",&num);
	
	if(num % 2 == 0)
	   printf("Given number %d is even",num);
	else
	   printf("Given number %d is odd",num);
	 
	
	
	return 0;
} 
