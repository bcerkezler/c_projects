/*
cd /Users/zeyneb/Desktop/DERSLER/BLM2031_YapisalProg_20181/Hafta12_Threading/
cc hafta12_eg1.c -o test -lpthread
Till control+Z
*/


#include <stdio.h>#include <pthread.h>        /*thread (worker) function definition*/void* threadFunction(void* args){    while(1)            printf("I am threadFunction.\n");}int main(){    /*creating a thread id in the main function (main thread) */   pthread_t id;   int ret;   /*creating thread*/   ret=pthread_create(&id, NULL, &threadFunction, NULL);   if(ret==0)        printf("Thread is created successfully.\n");       else{         printf("Thread is not created.\n");        return 0; /*return from main*/    }    while(1)           printf("I am main function.\n");             return 0;}