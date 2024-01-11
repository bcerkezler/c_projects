//Grafik y�ntemi
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
	int sayac=2,i,n;
	float x0,eps,deltax,tmp1,tmp2,kat[100],kts;
	
	
	
//Ba�lang�� de�erlerinin verilmesi.	

printf("Fonksiyonun derecesini giriniz: ");scanf("%d",&n);
printf("\n");	

printf("Fonksiyonun katsayilarini giriniz:\n");	
for(i=0;i<=n;i++){
  printf("x uzeri %d teriminin katsayisi: ",i);scanf("%f",&kts); 
  kat[i]=kts;
  printf("\n");
}
	
printf("x0 degerini giriniz: ");scanf("%f",&x0);	
printf("\nEpsilon degerini giriniz: ");scanf("%f",&eps);	
printf("\nDelta x degerini giriniz: ");scanf("%f",&deltax);	
printf("\n");	



//�terasyon i�lemleri i�in do..while d�ng�s�.
printf("1.iterasyon\n\n");
printf(" x0        f(x0)\n");
printf("----       -----\n");
printf("%.2f       %.2f\n",x0,fonksiyon(kat,n,x0));
 do{
	tmp1=x0;
	tmp2=fonksiyon(kat,n,x0);
    x0=x0+deltax;
printf("%.2f       %.2f\n",x0,fonksiyon(kat,n,x0));   
	
  //S�radaki iterasyona ge�i�in if yap�s� ile kontrol�.
  if(fonksiyon(kat,n,x0)*tmp2<0){
printf("\n");
printf("%d.iterasyon\n\n",sayac++);
printf(" x0        f(x0)\n");  
printf("----       -----\n");
  x0=x0-deltax;
printf("%.2f        %.2f\n",x0,fonksiyon(kat,n,x0));
  deltax=deltax/2;
}
	
}
 while(((x0+deltax)-tmp1)>eps);



//Denklemin yakla��k k�k�n�n bulunmas�.
printf("\n\n");
printf("Denklemin koku yaklasik olarak %.2f'dir.",x0+deltax);

getch();
	
	return 0;
}



