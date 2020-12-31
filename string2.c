#include<stdio.h>
int main()
{
	char str[24]="Hello World";
	char *ptr="Hello Sagar";
	//  str=str+1;  
	ptr=ptr+1;
	printf("%s\n",&str[1]);
	printf("%s\n",ptr);
	return 0;
}
