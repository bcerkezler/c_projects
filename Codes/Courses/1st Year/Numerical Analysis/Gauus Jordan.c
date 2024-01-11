#include <stdio.h>
#include <stdlib.h>



int main(){
	static float matris[50][50],sonuc[50][1];
	int i,j,boy,f;
	float c;
	
	printf("Denklem sayisi:");
	scanf("%d",&boy);
	
	for(i = 0; i < boy; i++){
		for(j = 0; j < boy; j++){
			printf("%d. denklemde x%d'in katsayisi:",i+1,j+1);
			scanf("%f",&matris[i][j]);
		}
		printf("%d. denklemin sonucu:",i+1);
		scanf("%f",&sonuc[i][0]);
	}
	
	for(i = 0; i < boy; i++){
		c = matris[i][i];
		for(j = 0; j < boy; j++){
			matris[i][j] /= c;
		}
		sonuc[i][0] /= c;
		for(f = 0; f < boy; f++){
			if(f != i){
				c = matris[f][i];
				for(j = 0; j < boy; j++){
					matris[f][j] -= c * matris[i][j];
				}
				sonuc[f][0] -= c * sonuc[i][0];
			}
		}
		
	}
	
	printf("\n");
	for(i = 0; i < boy; i++){
		printf("x%d = %f\n",i+1,sonuc[i][0]);
	}
	printf("\n");
	system("PAUSE");
	return 0;
}
