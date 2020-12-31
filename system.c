#include<stdio.h>
#include<unistd.h>
int main()
{
int ret;
printf("Calling system...\n");
ret=system("ls -l");
printf("Exiting system...  ret= %d\n",ret);
    return 0;
}