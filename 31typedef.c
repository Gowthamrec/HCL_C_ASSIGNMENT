#include<stdio.h>
#include<string.h>
typedef struct test{
    int rollno;
    char name[20];
} a;
int main(){
    //typedef struct test a;
    a student1;
    student1.rollno = 1;
    strcpy(student1.name,"Gowtham");
    printf("%d",student1.rollno);
    printf("\n%s\n",student1.name);
    a student2;
    student2.rollno = 2;
    strcpy(student2.name,"Karthi");
    printf("%d",student2.rollno);
    printf("\n%s\n",student2.name);
}
