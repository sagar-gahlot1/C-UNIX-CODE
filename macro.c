//  gcc -E -c macro.c

#include<stdio.h>

#define NUM1 2
#define NUM2 4

#define Sum(x,y) x+y

#define ADD

int main(int argv, char *args[])
{
	printf("%d %d\n",NUM1,NUM2);
	printf("SUM=%d\n",Sum(NUM1,NUM2));

#ifdef ADD
	printf("ADD define is present");
#else
	printf("ADD define is not present");
#endif	


	return 0;
}
