//Newton-Raphson Yöntemi
#include<stdio.h>
#include<math.h>

//f(x) iþleminin sonucunu bulmak için bir fonksiyon.
float fonksiyon(float dizi[],int n ,float x){
	
	int i;
	float sonuc=0;
			

for(i=0;i<=n;i++){
		
	sonuc=sonuc+(dizi[i]*pow(x,i));
	
}

	return sonuc;
}
//f'(x) iþleminin sonucunu bulmak için bir fonksiyon.

float turev(float dizi[],int n,float x){
	
	int i;
	float sonuc=0;
	
 for(i=0;i<=n;i++){
 	
 	sonuc=sonuc+(i*dizi[i]*pow(x,i-1));
 	
 }	
	
	return sonuc;
}



int main(){
//Deðiþkenlerin tanýmlanmasý.	
	
int n,i;
float kat[100],kts,x0,x1,eps,tmp;	
	
	
//Baþlangýç deðerleinin verilmesi.	
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
	
//Denklemin yaklaþýk kökünü bulabilmek için do..while döngüsü ile iterasyon iþlemleri.	
printf(" xk           x(k+1)\n");
printf("-----         --------\n");	
	do{

x0=tmp;
				
x1=x0-(fonksiyon(kat,n,x0)/turev(kat,n,x0));		
		
printf("%.2f            %.2f\n",x0,x1);		
		
tmp=x1;				
	
	}
	while(fabs(x1-x0)>eps);
	
//Denklemin yaklaþýk kökünün ekrana yazdýrýlmasý.	
	
printf("\n\nDenklemin yaklasik koku %.2f'dir.",x1);	
	


getch();

	
	return 0;
}






