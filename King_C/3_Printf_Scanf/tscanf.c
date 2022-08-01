#include <stdio.h>

int main()
{
	int x, y, z;
	float a, b;
	
	//EQUIVALENT
	//scanf("%d", &x);
	scanf(" %d",&x);
	printf("%d\n",x);
	
	//EQUIVALENT
	//scanf("%d-%d-%d", &x, &y, &z);
	scanf("%d -%d -%d", &x, &y, &z);
	printf("%d-%d-%d\n", x, y, z);
	
	//NON-EQUIVALENT
	//scanf("%f", &a);
	scanf("%f ",&a);
	printf("%f\n", a);
	
	//NON-EQUIVALENT
	//scanf("%f,%f", &a, &b);
	scanf("%f, %f ", &a, &b);
	printf("%f,%f\n", a, b);
	
	return 0;
}
