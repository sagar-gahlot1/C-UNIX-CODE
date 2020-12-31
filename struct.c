#include<stdio.h>
int main( int agrv, char *argc[])
{
	printf("Hello Sagar Gahlot\n");
	struct hello {
	int a;
	int b;
	}temp;
	temp.a=3;
	temp.b=4;
	printf("%d %d",temp.a,temp.b);
	return 0;
}
