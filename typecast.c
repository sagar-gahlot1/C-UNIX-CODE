#include<stdio.h>
int main()
{
    int i;
    char c;
    char *ptr;
    char a;


    c='w';
    i=(int)c;

    printf("w= %d\n",i);


    a='x';
    ptr=&a;

    long int k=(long int)ptr;

    printf("k= %ld\n",k);


    i=3000;
    c=(char)i;

    printf("c= %d",c);
    return 0;

}