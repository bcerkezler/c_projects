#include <stdio.h>
#include <string.h>
#define MAX_WORDS 5
#define LAST_LANG 2


int main(){
	
char* dict[LAST_LANG][MAX_WORDS]={{"abhar","able","abort","about",NULL},{"absurde","accepter","accord","achet",NULL}};	
char str[10];
int diff=-1 , language , j=0; 	
	scanf("%d",&language);
	scanf("%s",str);
	
	while(dict[language][j] && (diff<0) ){
		diff=strcmp(dict[language][j],str);
		j++;
	}
	
	if( diff == 0){
		printf("match");
	}
	else{
		j--;
		printf("best match : %s",dict[language][j]);
	}
	
	
	
	
	return 0;
}
