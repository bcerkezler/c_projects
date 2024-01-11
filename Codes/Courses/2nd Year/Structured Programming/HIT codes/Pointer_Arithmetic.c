//Pointer Arithmetic
#include <stdio.h>

int main(){

int len,dizi[100],i,sum = 0;
int test[5];
 *(test + 0) = 1;
 *(test + 1) = 3;
 *(test + 3) = *(test + 1) + *(test+0);

printf("Please enter the array length:");
scanf("%d",&len);

for(i = 0; i < len; i++) {
      *(dizi+i) = i+1;
}


for(i = 0; i < len; i++ ){
  sum = sum + *(dizi+i);
}


printf("Toplam = %d",sum);
printf("\n\n");

for (i = 0; i < 5; i++) {
   printf("%d ",*(test + i));
}



  return 0;
}
