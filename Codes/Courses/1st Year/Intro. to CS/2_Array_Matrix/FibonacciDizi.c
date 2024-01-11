#include <stdio.h>



int main() {
	
	int fibo[10],i;
	
	fibo[0] = fibo[1] = 1; 
	
	for (i = 2; i < 10; i++) {
		 fibo[i] = fibo[i-2] + fibo[i-1]; 
	}
	
	
	printf("10 elemanli fibonacci dizisi: \n");
	for (i = 0; i < 10; i++) {
		printf("%d  ",fibo[i]);
	}
	
	return 0;
}
