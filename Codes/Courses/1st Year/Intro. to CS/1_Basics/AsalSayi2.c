//Verilen n sayisina kadar kac tane asal sayi oldugunu bulan program (n dahil)

#include <stdio.h>

int isPrime(int);

int main() {
	
	int n, i, counter = 0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	
	for (i = 2; i <= n; i++) {
		if (isPrime(i)) {
			counter++;
		}
	}
	
	printf("%d (y)e/(y)a kadar toplam %d tane asal sayi vardir.",n,counter);
	
    return 0;
}

int isPrime(int num) {
    
    int i = 2;
    
    if (num == 2 || num == 3) {
    	return 1;
	}
    else if (num == 4) {
    	return 0;
	}
    else{
        while (i < (num / 2)) {
		    if(num % i == 0) {
		      return 0;
	        }
		        
		    i++;
      
	    }
   }
	return 1;
}

