//Regula Falsi(False position-Yerdeðiþtirme) yöntemi
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

int main(){
	
//Deðiþkenlerin tanýmlanmasý.
int n,i,sayac=0,z=0;
float kat[100],kts,a,b,c,fa,fb,fc,eps;	
	
	
	
		
//Baþlangýç deðerleinin verilmesi.	
printf("Fonksiyonun derecesini giriniz:");scanf("%d",&n);printf("\n\n");

printf("Fonksiyonun katsayilarini giriniz:\n");	
for(i=0;i<=n;i++){
  printf("x uzeri %d teriminin katsayisi: ",i);scanf("%f",&kts); 
  kat[i]=kts;
  printf("\n");
}

printf("a degerini giriniz:");scanf("%f",&a);
printf("\nb degerini giriniz:");scanf("%f",&b);
printf("\nepsilon degerini giriniz:");scanf("%f",&eps);	


//Ýterasyon iþlemleri ve yaklaþýk kökün bulunmasý için do..while döngüsü.
 do{
 	
 	sayac++;
 	
 	fa=fonksiyon(kat,n,a);
 	fb=fonksiyon(kat,n,b);
 	
 	c=((b*fa)-(a*fb))/(fa-fb);
 	
    fc=fonksiyon(kat,n,c); 
 	
if(fa*fc<=0){
	b=c;
} 	
else if(fb*fc<=0){
	a=c;
}
else{
	z=1;
	break;
}


	
 }	
 while(fabs(fc)>eps);	
	
	
//Denklemin kökünün yaklaþýk deðerinin ve iterasyon sayýsýnýn ekrana yazdýrýlmasý.	
	
	if(z==0){
		printf("\n\nDenklemin yaklasik koku %.4f'dir.",c);
		printf("\nIterasyon sayisi %d'dir.",sayac);
	}
	else{
		printf("\nDenklemin koku yok.");
	}
	
	
	
	
	
	getch();
	
	return 0;
}
