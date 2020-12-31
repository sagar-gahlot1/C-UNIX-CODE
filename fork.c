 #include<stdio.h>
 #include<unistd.h>

 int main()
 {
int childpid;
int count1=0,count2=0;
printf("Before it forks\n");

childpid=fork();

if(childpid==0){
    printf("THis is a child process\n");
    while(count1<10){
        printf("child process %d\n",count1);
        sleep(1);
        count1++;
    }
}
    else{

         printf("THis is a parent process\n");
    while(count2<20){
        printf("parent process %d\n",count2);
        sleep(1);
        count2++;
    }


    }

     return 0;

 }