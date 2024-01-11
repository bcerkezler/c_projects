//Fibonacci dizisinin istenen elemaninin bulunmasi

#include<stdio.h>


int main(){

    int num1 = 1,num2 = 1,num3,i,n;
	
    printf("Fibonacci dizisinin kacinci elemanini istiyorsunuz: ");
	scanf("%d",&n);
	
	for(i = 3; i <= n; i++){
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}
	
	printf("Fibonacci dizisinin %d. elemani: %d",n,num3);
	
	return 0;
}
