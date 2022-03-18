#include<stdio.h>
#include<string.h>

typedef struct Student{
    char   name[100];
}stu;


int main(){
//    struct Student s1;
     stu s2;
     strcpy(s2.name,"WASIM AKHTAR");

    printf("name : %s \n",s2.name);
    
    return 0 ;
}

/*
typedef keyword is used to create alias for data types

typedef struct ComputerEngineeringStudent{

    int roll;
    char name[100];

}coe;
coe = alias of ComputerEngineeringStudent
*/