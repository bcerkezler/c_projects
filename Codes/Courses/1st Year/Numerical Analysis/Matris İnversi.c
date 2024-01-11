#include <stdio.h>
#include <stdlib.h>

int main() {
	static float k,d,matris[25][25],invers[25][25];
	int i,j,x,boy;
	
	printf("Matrisin boyutunu giriniz: ");
	scanf("%d",&boy);
	
	for(i = 0; i < boy; i++){
		invers[i][i] = 1;
	}
	
	for(i = 0; i < boy; i++){
		for(j = 0; j < boy; j++){
			printf("matris[%d][%d]: ",i,j);
			scanf("%f",&matris[i][j]);
		}
	}
	
	for(i = 0; i < boy; i++){
		d = matris[i][i];
		for(j = 0; j < boy; j++){
			matris[i][j] /= d;
			invers[i][j] /= d;
		}
		for(x = 0; x < boy; x++){
			if(x != i){
				k = matris[x][i];
				for(j = 0; j < boy; j++){
					matris[x][j] -= matris[i][j] * k;
					invers[x][j] -= invers[i][j] * k;
				}
			}
		}
	}
	
	printf("\n\n\nMatrisin inversi: \n\n");
	for(i = 0; i < boy; i++){
		for(j = 0; j < boy; j++){
			printf(" %.3f ",invers[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
