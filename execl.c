#include<stdio.h>
#include<unistd.h>

int main()
{

int ret;
printf("CALLING EXECL....\n");
//   ret=execl("/usr/bin/ls","ls","-1",NULL);
ret=execl("hello","prog","one","two","three","four",NULL);

printf("FAILED EXECL>>>  ret=%d\n",ret);

    return 0;
}