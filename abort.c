#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main()
{
printf("Begin......\n");

for(int i=0;i<10;i++){
    printf("i=%d\n",i);
    assert(i<=5);
}

printf("End......\n");

abort();

    return 0;
}