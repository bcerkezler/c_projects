//Verilen sayiyi asal carpanlarina ayiran program

#include <stdio.h>

int main() {

    int num,i = 2,flag = 0,current,div;

    printf("Bir sayi giriniz:");
    scanf("%d",&num);
    div = num;
	  
    printf("\n%d sayisinin asal carpanlarina ayrilmis hali: \n",num);
   if (num < 2) {
   	  printf("Hatali sayi girdiniz.");
   }
   else {
	  while (i <= num  && flag == 0) {
	  	   if (div % i == 0) {
		       printf("%d",i);
		       div = div / i;
		       flag = 1;
		   }
		   
		   i++; 
		   
	  }
	   
	   i--;
	   current = i;
	   
	   for (i = current; i <= num; i++) {
	   	    while (div % i == 0) {
	   	  	    printf("*%d",i);
	   	  	    div = div / i;
		  }
	   	
	   }
   }
    
	return 0;
}
