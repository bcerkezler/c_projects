//Palindrom Number Control
#include <stdio.h>

int main(){
    
	int number , counter = 0 , reverse = 0 , i , tmp ,tmp2 ;

    printf("Please enter a number: ");
	scanf("%d",&number);
           
     tmp=number;
	 tmp2=number;
    
	if(number == 0 )
	   counter++;
	else{
	       while( number != 0 )
         {
    	   number = number/10 ;
		   counter++; 
	     }
       }
	
	for( i=1 ; i<=counter  ; i++ ) 
	{
		reverse = ( reverse + (tmp%10) ) ;
		reverse = reverse * 10;
		tmp = tmp / 10;
		
	}
	
	reverse=reverse/10;
	
	if( tmp2 == reverse )
	{
	  printf("Palindrome."); 
	}
	else 
	{
	  printf("Not palindrome.");
    }
	 
	
	return 0;
}
