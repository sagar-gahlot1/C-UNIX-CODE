#include<stdio.h>
#include<stdlib.h>
int main()
{
int ret;
ret=setenv("MYENV","hello",0);
if(ret==-1){
    perror("putenv");
    printf("ret=%d\n",ret);
}
ret=system("./getenv");
perror("system");
printf("ret= %d\n",ret);




    return 0;
}