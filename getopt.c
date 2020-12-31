#include<stdio.h>
#include<unistd.h>
int main(int argc , char *argv[])
{
int c;
int xflg=0,yflg=0,zflg=0;
while((c=getopt(argc,argv,"x:y:z"))!=-1)    // means x need an argument like ./getopt -x 4 -y
{
    switch(c){
        case 'x':
        xflg=1;
        printf("optarg x = %s\n",optarg);
        break;
        case 'y':
        printf("optarg y= %s\n",optarg);
        yflg=1;
        break;
        case 'z':
        printf("optarg z= %s\n",optarg);
        zflg=1;
        break;
        case '?':
        fprintf(stderr,"unknown option -%c. \n",optopt);
        break;
        default:
        fprintf(stderr,"getopt");
    }
}
printf("xflg=%d yflg=%d zflg=%d\n",xflg,yflg,zflg);


    return 0;
}