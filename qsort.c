#include<stdio.h>
#include<stdlib.h>

int comparefunc(const void * a,const void *b){
    int aa,bb;

    aa=*(int *)a;
    bb=*(int *)b;
    return (aa-bb);
}


int main()
{

int numbers[]={5,2,7,3,8,23,56,8,42,1};

printf("Brefore Sort\n");
for(int i=0;i<10;i++)
printf("%d ",numbers[i]);


qsort(numbers,10,sizeof(int),comparefunc);


printf("\nAfter Sort\n");
for(int i=0;i<10;i++)
printf("%d ",numbers[i]);


    return 0;
}