#include<stdio.h>
#include<stdlib.h>
int main()
{
char *p;
p=getenv("MYENV");
printf("p= %s\n",p);

return 0;

}