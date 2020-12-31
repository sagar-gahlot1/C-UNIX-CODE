#include<stdio.h>
#include<stdlib.h>

int main()
{
char *string="5782";
char *strdb1="6725.765";
int a;
double b;
a=atoi(string);
b=atof(strdb1);

printf("int= %d double=%f",a,b);


    return 0;
}