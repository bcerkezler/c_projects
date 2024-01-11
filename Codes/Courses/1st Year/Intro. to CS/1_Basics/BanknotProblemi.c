// Parayi en az sayida banknot kullanarak veren program

#include<stdio.h>



int main(){
	
    int para,ikiyuz=0,yuz=0,elli=0,yirmi=0,on=0,bes=0,bir=0;
	
	
    printf("Istenecek para miktarini giriniz: ");
    scanf("%d",&para);
	
	
    if(para % 200 != para)
    {
	   ikiyuz = para / 200;
	   para = para % 200;
    }
	
	 if(para % 100 != para)
    {
	  yuz = para / 100;
	  para = para % 100;
    }
	
	 if(para % 50 != para)
    {
	  elli = para / 50;
	  para = para % 50;
    }
	
	 if(para % 20 != para)
    {
	  yirmi = para / 20;
	  para = para % 20;
    }
	
	 if(para % 10 != para)
    {
	  on = para / 10;
	  para = para % 10;
    }
	
	 if(para % 5 != para)
    {
	  bes = para / 5;
 	  para = para % 5;
    }
	
	 if(para % 1 != para)
    {
	  bir = para / 1;
	  para = para % 1;
    }
	
	 printf("ikiyuzluk: %d , yuzluk: %d , ellilik: %d , yirmilik: %d , onluk: %d , beslik: %d , birlik: %d",ikiyuz,yuz,elli,yirmi,
 	 on,bes,bir);
	
	
	
	
	
    return 0;
}
