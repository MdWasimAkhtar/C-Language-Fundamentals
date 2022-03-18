#include<stdio.h>
#include<string.h>


void store_data();

struct Student{
    char name[100];
    int roll;
    float cgpa;
};


int main(){
    struct Student s1;
    s1.roll = 1212;
   // s1.name = "MD WASIM AKHTAR";
   strcpy(s1.name,"MD WASI AKHTAR");
    s1.cgpa = 6.3;

    printf("Student name : %s \n",s1.name);
    printf("Student roll : %d \n",s1.roll);
    printf("Student cgpa : %f \n",s1.cgpa);
    
    store_data();
    return 0 ;
}

void store_data(){
    struct Student s1;

    strcpy(s1.name,"Shilpa");
    s1.roll=13;
    s1.cgpa=7.2;

    printf("Student name : %s \n",s1.name);
    printf("Student roll : %d \n",s1.roll);
    printf("Student cgpa : %f \n",s1.cgpa);

     struct Student s2;

    strcpy(s2.name,"SALMA ");
    s2.roll=73;
    s2.cgpa=7.9;

    printf("Student name : %s \n",s2.name);
    printf("Student roll : %d \n",s2.roll);
    printf("Student cgpa : %f \n",s2.cgpa);

}

/*
struct - good data management 

*/


