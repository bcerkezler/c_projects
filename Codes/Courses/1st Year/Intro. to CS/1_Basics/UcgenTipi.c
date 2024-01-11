//Finding the type of a triangle.
#include<stdio.h>

int main() {
	
	int edg1,edg2,edg3;
	
	 printf("Length of the first edge: ");scanf("%d",&edg1);
	 printf("Length of the second edge:");scanf("%d",&edg2);
	 printf("Length of the third edge: ");scanf("%d",&edg3);
   	
	
   printf("\n");
		
		    if(edg1==edg2){
		    	 if(edg2==edg3)
		    	  printf("Eskenar ucgen\n");
		    	  else
		    	  printf("Ikizkenar ucgen\n");
			}
		   else{
		   	     if(edg1==edg3)
		   	     	printf("Ikizkenar ucgen\n");
				 else{
				 	   if(edg2==edg3)
				 	   printf("Ikizkenar ucgen\n");
				 	  else
				 	  printf("Cesitkenar ucgen\n");
				 }
					
		   }
	
	
		

	
	return 0;
}
