#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	char b;
	char name[10];
	char desg[10];
	char *str="Tom Manager 20";
	char *ptr=malloc(20);

	//   fgets(str,10,stdin);
       //   scanf("%[^\n]s",str);
       //  scanf("%[^\n]s",str);

     
	sscanf(str,"%s %s %d",name,desg,&a);
	scanf("\n");
	scanf("%c",&b);
	//	printf("%s\n",str);
	sprintf(ptr,"%s",str);
//	printf("int=%d\n",a);
	printf("char=%c\n",b);
	printf("name %s desgn %s %d\n",name,desg,a);
	printf("%s",ptr);
	return 0;
}
