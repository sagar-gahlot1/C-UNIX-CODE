#include<stdio.h>
int main()
{
int a=5;

int *x;
int **z;
x=&a;
z=&x;

printf("%d",**z);
    return 0;
}