/* how to compile and create exe for the main function:
cc -c salute.c #this will give you salute.occ -c hafta7_2_hdr.c #this will give you main.o cc -o test hafta7_2_hdr.o salute.o #this will create the main executable
*/

#include <stdio.h>#include "salute.h"int main ( void )  {	salute();	return 0;}