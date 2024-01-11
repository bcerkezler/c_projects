//Newton-Raphson Y�ntemi
#include<stdio.h>
#include<math.h>

//f(x) i�leminin sonucunu bulmak i�in bir fonksiyon.
float fonksiyon(float dizi[],int n ,float x){
	
	int i;
	float sonuc=0;
			

for(i=0;i<=n;i++){
		
	sonuc=sonuc+(dizi[i]*pow(x,i));
	
}

	return sonuc;
}
//f'(x) i�leminin sonucunu bulmak i�in bir fonksiyon.

float turev(float dizi[],int n,float x){
	
	int i;
	float sonuc=0;
	
 for(i=0;i<=n;i++){
 	
 	sonuc=sonuc+(i*dizi[i]*pow(x,i-1));
 	
 }	
	
	return sonuc;
}



int main(){
//De�i�kenlerin tan�mlanmas�.	
	
int n,i;
float kat[100],kts,x0,x1,eps,tmp;	
	
	
//Ba�lang�� de�erleinin verilmesi.	
printf("Fonksiyonun derecesini giriniz: ");scanf("%d",&n);printf("\n\n");

printf("Fonksiyonun katsayilarini giriniz:\n");	
for(i=0;i<=n;i++){
  printf("x uzeri %d teriminin katsayisi: ",i);scanf("%f",&kts); 
  kat[i]=kts;
  printf("\n");
}

printf("\nx0 degerini giriniz: ");scanf("%f",&x0);
printf("\nepsilon degerini giriniz: ");scanf("%f",&eps);
tmp=x0;		
printf("\n\n");	
	
//Denklemin yakla��k k�k�n� bulabilmek i�in do..while d�ng�s� ile iterasyon i�lemleri.	
printf(" xk           x(k+1)\n");
printf("-----         --------\n");	
	do{

x0=tmp;
				
x1=x0-(fonksiyon(kat,n,x0)/turev(kat,n,x0));		
		
printf("%.2f            %.2f\n",x0,x1);		
		
tmp=x1;				
	
	}
	while(fabs(x1-x0)>eps);
	
//Denklemin yakla��k k�k�n�n ekrana yazd�r�lmas�.	
	
printf("\n\nDenklemin yaklasik koku %.2f'dir.",x1);	
	


getch();

	
	return 0;
}






