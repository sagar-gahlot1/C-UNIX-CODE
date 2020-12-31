#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/mman.h>
#include<string.h>
#include<unistd.h>
int  main()
{
int fd;
struct stat mystat;
char *pmap;
fd=open("test.txt",O_RDWR);
if(fd==-1){
    perror("open");
    exit(1);
}

if(fstat(fd,&mystat)<0){
    perror("fstat");
    close(fd);
    exit(1);
}
pmap=mmap(0,mystat.st_size,PROT_READ | PROT_WRITE |MAP_SHARED,fd,0,NULL);
if(pmap==MAP_FAILED){
    perror(mmap);
    close(fd);
    exit(1);
}
strncpy(pmap,"that",4);
close(fd);
    return 0;
}