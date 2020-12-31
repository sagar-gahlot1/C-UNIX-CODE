#include<stdio.h>
#include<time.h>
int main()
{
char buf[32];
struct tm *mytm;
time_t mytime;
mytime=time(NULL);
mytm=localtime(&mytime);

strftime(buf,31, "%Y-%m-%d  %I:%M:%S %p",mytm);

printf("DATE AND TIME : %s",buf);


    return 0;
}