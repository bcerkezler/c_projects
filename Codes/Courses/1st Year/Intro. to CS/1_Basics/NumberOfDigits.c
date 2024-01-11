//This program finds the number of digits of the given number.
#include <stdio.h>


int main(){

    long int number; 
    int counter = 0;
       
   
    printf("Please enter the number: ");
    scanf("%ld",&number);
    
    if(number == 0)
      counter++;
    else{
       while( number != 0 )
      {
    	number /= 10;
    	counter++;
	  }
    }
    
	printf("\n"); 
    printf("Number of digits = %d \n",counter);
    
    
    return 0;   
   }
