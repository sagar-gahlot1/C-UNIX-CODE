#include<stdio.h>

int main()
{
    int a[10]={8,29,5,11,21,45,7,2,22,17};

    int i,j,n;

    for(i=0;i<10-1;i++){
        for(j=0;j<10-1-i;j++){
            if(a[j]>a[j+1]){
                n=a[j];
                a[j]=a[j+1];
                a[j+1]=n;
            }
        }
    }

for(i=0;i<10;i++){
    printf("a[%d]= %d\n",i,a[i]);
}

    return 0;
}