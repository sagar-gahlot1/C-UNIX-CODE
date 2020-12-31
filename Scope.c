#include<stdio.h>
int main()
{
int a;
a=2;
{
    int a;
    a=4;
    {
        int a;
        a=7;
        printf("Inner Inner a= %d\n",a);
    }
    printf("Inner a= %d\n",a);
}
printf("Outer a= %d\n",a);

    return 0;
}