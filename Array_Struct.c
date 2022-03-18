#include<stdio.h>
#include<string.h>

struct Emp
{
    int id;
    char name[10];
    float salary;
    char dept[10];
};

int main(){
    struct Emp e1[10];
    e1[0].id =100;
    e1[0].salary=34000;
    strcpy(e1[0].name,"SALMA");
    strcpy(e1[0].dept,"CS");

    printf("emp id : %d \n ",e1->id);
    printf("emp name : %s \n ",e1->name);
    printf("emp salary : %.2f \n ",e1->salary);
     printf("emp dept  : %s \n ",e1->dept);

    struct Emp e2 ={13145,"WASI",3800000,"ME" };

    printf("emp id : %d \n ",e2.id);
    printf("emp name : %s \n ",e2.name);
    printf("emp salary : %.2f \n ",e2.salary);
    printf("emp dept  : %s \n ",e2.dept);
}