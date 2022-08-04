#include <stdio.h>

int main()
{
	int int1, int2, int3, int4, max, min, max1, max2, min1, min2;
	
	printf("Enter four integers: ");
	scanf("%d%d%d%d", &int1, &int2, &int3, &int4);
	
	if (int1 > int2) {
		max1 = int1;
		min1 = int2;
    } else {
		max1 = int2;
		min1 = int1;
	}
	
	if (int3 > int4) {
		max2 = int3;
		min2 = int4;
	} else {
		max2 = int4;
		min2 = int3;
	}
	   
	if (max1 > max2) {
		max = max1;
	} else {
		max = max2;
	}
	 
	if (min1 < min2) {
		min = min1;
	} else {
		min = min2;
	}  
	   
	printf("Largest: %d\nSmallest: %d\n", max, min);
	
	
	return 0;
}
