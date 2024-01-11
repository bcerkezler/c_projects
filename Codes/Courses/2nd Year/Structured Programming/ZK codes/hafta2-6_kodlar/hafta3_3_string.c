#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* cd /Users/zeyneb/Desktop/DERSLER/BLM2031_YapisalProg_20181/hafta3_codes
cc -o test hafta3_3_string.c 
*/

/*
int main(){
  char str1[] = "some text";  char str2[10] = "yes";  char str3[3] = "four";  char str4[4] = "fou";  char *ptr = "more teeext";

  printf("strlen(str1): %lu\n", strlen(str1));
  printf("strlen(str2): %lu\n", strlen(str2));
  printf("strlen(str3): %lu\n", strlen(str3));
  printf("strlen(str4): %lu\n", strlen(str4));
  printf("strlen(ptr): %lu\n", strlen(ptr));

  for(int i=0; i<strlen(ptr); i++)
    printf("%d: %c ", i, ptr[i]);
  printf("\nsonuncu: %d \n", ptr[strlen(ptr)]);
  return 0; }
*/


int main ()  {
  char array[10];
  char *ptr1;
  strcpy(ptr1,"10 spaces");
  char *ptr2;
  //array = "not OK"; // can NOT assign to an address !
  array[5] = 'A';	// OK
  printf("ptr1: %s\n", ptr1);
  ptr1[5] = 'B';	// OK
  //ptr1="OK"; ptr1[5]='C';		// questionable due to the prior assignment
  // -- *ptr2 = "not OK";	// type mismatch ERROR 
  strcpy(ptr2,"OK");
  printf("ptr2: %s\n", ptr2);
  strcpy(ptr2, "Ob");  
  printf("ptr2: %s\n", ptr2);
  return 0;
}

/* yanlis olan atamalar
int main ()  {
  char array[10];
  char *ptr1="10 spaces";
  char *ptr2;
  //array = "not OK"; // can NOT assign to an address !
  array[5] = 'A';	// OK
  printf("ptr1: %s\n", ptr1);
  //ptr1[5] = 'B';	// OK
  //ptr1="OK"; ptr1[5]='C';		// questionable due to the prior assignment
  // -- *ptr2 = "not OK";	// type mismatch ERROR 
  ptr2="OK";
  printf("ptr2: %s\n", ptr2);
  strcpy(ptr2, "Ob");  
  printf("ptr2: %s\n", ptr2);
  return 0;
}
*/
