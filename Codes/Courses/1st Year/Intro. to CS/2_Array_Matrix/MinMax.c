#include <stdio.h>



int main() {
	
	int dizi[10],i,min,max;
	
	printf("Dizinin elemanlarini giriniz: \n");
	for (i = 0; i < 10; i++) {	
		printf("dizi[%d]: ",i);
		scanf("%d",&dizi[i]);
	}
	
	min = dizi[0];
	max = dizi[0];
	
	for (i = 1; i < 10; i++) {
		if(min < dizi[i]) {
			if(max < dizi[i]) {
				max = dizi[i];
			}
		}
		else {
			min = dizi[i];
		}
	}
	
	printf("\n\n min = %d , max = %d",min,max);
	
	return 0;
} 
