//Verilen sayinin faktoriyelini bulan program

#include<stdio.h>


int main(){
	
    int fact = 1,i,n;	
	
    printf("Faktoriyeli alinacak sayiyi girin: ");
    scanf("%d",&n);
	
	 if(n >= 1){
       
	    for(i = 1; i <= n; i++)
	       fact = fact * i;  
	 	   
           printf("%d! = %d'dir.",n,fact);
     
	  } else if(n == 0){
	     printf("%d! = 1'dir",n);
	  } else
   	     printf("Hatali sayi girdiniz!");
     
   
   
   
   
    return 0;
}
