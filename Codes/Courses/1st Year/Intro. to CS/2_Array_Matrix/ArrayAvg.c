#include <stdio.h>


int main() {
	
	int dizi[10],i,sum = 0;
	float avg;
	
	printf("Dizinin elemanlarini giriniz: \n");
	for (i = 0; i < 10; i++) {
		printf("dizi[%d]: ",i);
		scanf("%d",&dizi[i]);
	}
	
	for (i = 0; i < 10; i++) {
		sum = sum + dizi[i];
	}
	
	avg = (float)sum / 10;
	
	printf("\nElemanlarin ortalamasi : %.2f",avg);
	
	
	
	
	return 0;
}
