/* 
 * IsPositive
 * Verilen bir sayinin pozitif mi negatif mi oldugunu soyleyen program.
 */
 
 #include <stdio.h>
 
 
 
  int main(){
  	
  	float num;
  	
  	
  	printf("Please enter the number: ");
  	scanf("%f",&num);
  	
  	 if(num == 0){
  	 	printf("Given number %.2f is zero",num);
     }
     else if(num < 0){
     	printf("Given number %.2f is negative",num); 
	 }   	 	
  	 else{
  	  	 printf("Given number %.2f is positive",num);
	 }	
  	 	

	return 0;
  }
