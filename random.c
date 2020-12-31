#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand((unsigned int)time(NULL));
printf("r1=%d\n",rand()%6+1);
    return 0;
}