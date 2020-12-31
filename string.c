#include<stdio.h>
#include<string.h>
int main()
{
	char str[24];
	sprintf(str,"Hello Sagar");
	printf("%s\n",str);
	printf("%ld\n",strlen(str));
	return 0;
}
