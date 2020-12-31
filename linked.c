#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct people_tag{
    char firstname[16];
    char lastname[16];
    unsigned int age;
    struct people_tag *next;
}people_t;
int main()
{
people_t *head=NULL;
people_t *new;

people_t *list;

char *name[]={"Andy","JOhn","Peter","Raul",NULL};
char *last[]={"Mans","DOe","Mars","Gonzales",NULL};
unsigned int age[]={22,34,24,18,0};

int i=0;

while(name[i]){
new=(people_t *)malloc(sizeof(people_t));
if(new==NULL){
    fprintf(stderr,"unable to allocate memory.\n");
    exit(1);
}

strcpy(new->firstname,name[i]);
strcpy(new->lastname,last[i]);
new->age=age[i];
new->next=head;
head=new;
i++;
}

list=head;
while(list!=NULL){
    printf("Firstname: %s\n",list->firstname);
    printf("Lastname: %s\n",list->lastname);
    printf("Age: %d\n",list->age);
list=list->next;
}




list=head;
while(list!=NULL){
 head=list->next;
 free(list);
 list=head;
}


    return 0;
}