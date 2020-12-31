#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

void *myfunc1(void *myvar);
void *myfunc2(void *myvar);
int a[100];
pthread_mutex_t lock;

int main()
{
pthread_t thread1, thread2;
char *msg1="First thread";
char *msg2="Second thread";

int ret1,ret2;

ret1=pthread_create(&thread1,NULL,myfunc1,(void *) msg1);
ret2=pthread_create(&thread2,NULL,myfunc2,(void *) msg2);


printf("Main function after pthread_create\n");

pthread_join(thread1,NULL);
pthread_join(thread2,NULL);

printf("First thread ret1= %d\n",ret1);

printf("Second thread ret1= %d\n",ret2);

return 0;
}


void *myfunc1(void *ptr){
    char *msg;
    msg=(char *)ptr;
    pthread_mutex_lock(&lock);
    int i;
    printf("msg: %s \n",msg);
    for(i=0;i<100;i++){
        printf("X");
        a[i]=i;
    }
    pthread_mutex_unlock(&lock);
}


void *myfunc2(void *ptr){
    char *msg;
    msg=(char *)ptr;
    pthread_mutex_lock(&lock);
    int i;
    printf("msg: %s \n",msg);
    for(i=0;i<100;i++){
        printf("%d ",a[i]);
    }
    pthread_mutex_unlock(&lock);
}

