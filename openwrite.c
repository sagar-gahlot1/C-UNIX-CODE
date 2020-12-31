#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
FILE *fs;
char buf[10];

fs=fopen("mytext.txt","r");

if(fs==NULL){
    perror("fopen");
    exit(1);
}

size_t sz;
while(!feof(fs)){
sz=fread((void *)buf,10,1,fs);
//printf(" %d ",sz);
if(sz==0){
    int i=0;
while(buf[i]!='\n')
printf("%c",buf[i++]);
}else
{
  printf("%s",buf);
}
}
printf("\n");

fclose(fs);
    return 0;
}