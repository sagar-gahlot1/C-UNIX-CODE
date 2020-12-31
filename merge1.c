// run by   gcc -c merge2.c
// run by gcc -o merge merge1.o merge2.o or gcc -o merge merge1.c merge2.c

#include<stdio.h>
int addnumbers(int, int);
int main(int argc, char *argv[])
{
	int total;
	total= addnumbers(2,4);
	printf("result = %d\n",total);
	return 0;
}
