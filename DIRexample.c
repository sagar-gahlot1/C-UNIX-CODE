#include<stdio.h>

#include<sys/types.h>
#include<dirent.h>
int main(){
 
 DIR *dir;
 struct  dirent *sd;
 {
     /* data */
 };
 

 dir=opendir(".");

 if(dir==NULL){
     printf("Eroor unable to open directory\n");
     exit(1);
 }


while (   (sd=readdir(dir))!=NULL   )
{
    /* code */
printf(">> %s\n",sd->d_name);

}






 closedir(dir);

    return 0;
}