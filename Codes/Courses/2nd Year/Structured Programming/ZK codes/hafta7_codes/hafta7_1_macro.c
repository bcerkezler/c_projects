/* cd /Users/zeyneb/Desktop/DERSLER/BLM2031_YapisalProg_20181/hafta7_codes
cc -o test hafta7_1_macro.c 
*/

#include <stdio.h>
#define TO_LOWER(e) ((e) + ('a' - 'A'))
#define min(a,b)  ((a) < (b) ? (a) : (b))#define CHECK(a, b) \ if((a)!=(b)) \   fail( a, b, __FILE__, __LINE__)void fail(int a, int b, char* p, int line){     printf( "Check failed in file %s at line %d: received %d, expected %d\n", p, line, a, b); }

int main(){
    int x=1,y=2,z; //try x=0 , x=1, x=2

/*
    char c1, c2;
    c1='F';
    c2=TO_LOWER(c1);
    printf("after the conversion: %c\n", c2);
    z = min(x++, y);    printf("x: %d, y:%d, min value: %d\n", x,y,z);
*/

    CHECK(x, 0); 
    printf("This utility is compiled on %s at %s\n",  __DATE__, __TIME__);
    if(__STDC__==1)
	    printf("This utility is convenient for the ANSI standards \n");
	else
	    printf("This utility is not convenient for the ANSI standards \n");
   
    return 0;
}
