#include<stdio.h>
#include<ctype.h>

int main()
{

char mystr[]="Hello World!";
printf("%s\n",mystr);
printf("%c\n",toupper(mystr[0]));
printf("%c\n",tolower(mystr[0]));

    return 0;
}