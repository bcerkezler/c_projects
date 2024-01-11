//Bir sayinin asal olup olmadigini bulan program.

#include <stdio.h>


int main() {
	
    int n, i = 2, flag = 0;
	
	printf("Please enter a number: ");
	scanf("%d",&n);
	
	if (n < 2 || n == 4) {
	   flag = 1;
    } 
    else if (n == 2 || n == 3) {
	   flag = 0;	
    } 
    else {
	      while (i < (n/2) && flag == 0) {
		        if(n % i == 0) {
		          flag = 1;
	            }
		        
				i++;
      
	        }
    }
	 
	 
	if (flag == 1)
	   printf("%d is not a prime number",n);
	
	else
	   printf("%d is a prime number",n);
	 
	
    return 0;
}
