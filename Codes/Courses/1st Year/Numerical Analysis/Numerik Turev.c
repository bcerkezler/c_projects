//N�merik T�rev 
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

int n,i;
float kat[100],kts,x0,deltax,Turev1,Turev2,Turev3;




//Ba�lang�� de�erlerinin verilmesi.

printf("Fonksiyonun derecesini giriniz: ");scanf("%d",&n);
printf("\n");	

printf("Fonksiyonun katsayilarini giriniz:\n");	
for(i=0;i<=n;i++){
  printf("x uzeri %d teriminin katsayisi: ",i);scanf("%f",&kts); 
  kat[i]=kts;
  printf("\n");
}	
	
printf("\nx0 degerini giriniz: ");scanf("%f",&x0);	
printf("\ndelta x degerini giriniz: ");scanf("%f",&deltax);	
printf("\n\n");


//�leri fark t�revin bulunmas�.	
printf("Ileri Fark Turev\n");
printf("-----------------\n\n");	
	
	
Turev1=(fonksiyon(kat,n,x0+deltax)-fonksiyon(kat,n,x0))/((x0+deltax)-x0);	
	
printf("Fonksiyonun ileri fark turevi %.2f'dir.\n\n",Turev1);	
	
//Geri fark t�revin bulunmas�. 	
printf("Geri Fark Turev\n");
printf("----------------\n\n");	
	
Turev2=(fonksiyon(kat,n,x0)-fonksiyon(kat,n,x0-deltax))/(x0-(x0-deltax));	
	
printf("Fonksiyonun geri fark turevi %.2f'dir.\n\n",Turev2);	
		
//Merkezi fark t�revin bulunmas�.
printf("Merkezi Fark Turev\n");
printf("-------------------\n\n");

Turev3=(fonksiyon(kat,n,x0+deltax)-fonksiyon(kat,n,x0-deltax))/(2*deltax);

printf("Fonksiyonun merkezi fark turevi %.2f'dir.\n\n",Turev3);





	getch();
	
	return 0;
}
