#include<stdio.h>
#include<stdlib.h>
#include<alloca.h>
#include<string.h>

int main()
{
   char *ptr;

   ptr=(char *)malloc(24);

   if(ptr==NULL){
       printf("Failed to allocate the memory");
       exit(1);
   }
   stpcpy(ptr,"Hello There!...");

   printf("ptr = %s",ptr);

   free(ptr);
   return 0;

}