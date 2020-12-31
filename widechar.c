#include<stdio.h>
#include<stdlib.h>
#include<wchar.h>
int main()
{
    wchar_t buf[128]=L"Hello World!";
    wchar_t buf2[128];
    wcscpy(buf2,buf);
    wprintf(L"%ls\n",buf);
    wprintf(L"%ls\n",buf2);
    return 0;
}