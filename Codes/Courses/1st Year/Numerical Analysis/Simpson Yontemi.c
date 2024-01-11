//Simpson Yontemi
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

int main(){
//De�i�kenlerin tan�mlanmas�.

int i,n,k;

float kat[100],kts,a,b,h,tmp,dizi[100],S1=0,S2=0,ToplamAlan;



//Ba�lang�� de�erlerinin verilmesi.	
printf("Fonksiyonun derecesini giriniz:");scanf("%d",&k);printf("\n\n");

printf("Fonksiyonun katsayilarini giriniz:\n");	
for(i=0;i<=k;i++){
  printf("x uzeri %d teriminin katsayisi: ",i);scanf("%f",&kts); 
  kat[i]=kts;
  printf("\n");
}

printf("\na degerini giriniz: ");scanf("%f",&a);
printf("\nb degerini giriniz: ");scanf("%f",&b);

do{
	
	printf("\nn degerini giriniz(n degeri cift olmali): ");scanf("%d",&n);	
}
while(n%2!=0);

printf("\n");
tmp=a;
	
	
//h de�erinin bulunmas�.	
	
	h=(b-a)/n;

//[a,b] aral���ndaki f(x) de�erlerinin bir diziye atanmas� ve iterasyonun ekrana yazd�r�lmas�.
printf(" x         f(x)\n");
printf("---        -----\n");
	
 for(i=0;i<=n;i++){
 	
	dizi[i]=fonksiyon(kat,k,a);
printf("%.2f         %.2f\n",a,dizi[i]);
 	a=a+h;
 	 	
 }

	
//f(x) fonksiyonunun [a,b] aral���nda alt�nda kalan alan�n�n yani integralinin hesaplanmas�.

for(i=1;i<=(n-1);i+=2){

	S1=S1+dizi[i];
	
}

for(i=2;i<=(n-2);i+=2){
	
	S2=S2+dizi[i];
	
}


ToplamAlan=(h/3)*(dizi[0]+dizi[n]+4*S1+2*S2);


//�ntegralin sonucunun ekrana yazd�r�lmas�.

printf("\n\nVerilen fonksiyonun %.f ve %.f araligindaki integrali %.4f'dir.",tmp,b,ToplamAlan);


getch();

	
   return 0;
   	
}
