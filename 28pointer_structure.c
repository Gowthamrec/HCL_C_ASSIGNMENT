//Use a pointer to a struct Student to update marks and print updated details. Demonstrate why passing by pointer is efficient compared to passing by value.
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
    p = &s2;
    printf(" %d  ",p->roll);
    printf(" %s  ",p->name);
    printf(" %f  \n",p->mark);
    p->mark = 95;
    printf("Updated mark: %f\n", p->mark);  
    return 0;
}   