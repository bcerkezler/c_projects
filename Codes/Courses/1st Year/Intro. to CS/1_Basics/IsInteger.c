/*
 * Is Integer
 * Verilen sayinin tam sayi olup olmadigini bulan program.
*/

#include<stdio.h>


 int main(){
 	
 	float num;
 	int test;
 	
 	printf("Please enter the number: ");
 	scanf("%f",&num);
 	
 	test = num / 1;
 	
 	if((num-test) == 0){
 		printf("Given number %.2f is an integer",num);
	 }
 	else{
 		printf("Given number %.2f is not an integer",num);
	 }
 	
 	
 	return 0;
 }
