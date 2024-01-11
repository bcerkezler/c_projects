#include <stdio.h>
// cd /Users/zeyneb/Desktop/DERSLER/BLM2031_YapisalProg_20181/hafta2_codes
// cc -o test hafta2_opr_in_loops.c 

int main ()  {
	int j, k;
	int count=0;
	for (j = 0, k = 100; k-j > 0; j++, k-- ){
		//printf("j: %d\t, k:%d\n", j, k);
		count++;
	}
	printf("count: %d\n", count);
	printf("sizeof(3+5): %lu\n", sizeof(3+5));
    	printf("sizeof(short): %lu\n", sizeof(short));
    	printf("sizeof(int): %lu\n", sizeof(int));
	printf("sizeof(float): %lu\n", sizeof(float));
	printf("sizeof(double): %lu\n", sizeof(double));
    	
	return 0;
}
