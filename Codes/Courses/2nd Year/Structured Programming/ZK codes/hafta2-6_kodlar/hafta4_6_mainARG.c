#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* cd /Users/zeyneb/Desktop/DERSLER/BLM2031_YapisalProg_20181/hafta4_codes
cc -o test hafta4_6_mainARG.c 
*/

int main(int argc, char *argv[])  {	while(--argc > 0 ) 		printf("%s\n",  *++argv);	return 0;}