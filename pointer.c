#include <stdio.h>

int sum(int a,int b){
return a+b;
}

int main()
{
	int (*plus)(int,int);
	plus=&sum;
	printf("%d\n",plus(2,3));
	return 0;
}