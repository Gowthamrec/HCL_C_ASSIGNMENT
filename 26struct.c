#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[20];
    float mark;
};


int main(){
    struct student s2;
    struct student *p;
    s2.roll = 2;
    strcpy(s2.name,"Gowtham");
    s2.mark = 90;
    // printf("%d",sizeof(s2));
    p = &s2;
    printf(" %d  ",s2.roll);
    printf(" %s  ",s2.name);
    printf(" %f  \n",s2.mark);
    printf("\n-------------------------------------------------\n");
    printf("%d",sizeof(s2));
    printf("\n-------------------------------------------------\n");
    printf(" %d  ",p->roll);
    printf(" %s  ",p->name);
    printf(" %f  \n",p->mark);
    printf("\n-------------------------------------------------\n");
    printf("%d",sizeof(*p));

}

