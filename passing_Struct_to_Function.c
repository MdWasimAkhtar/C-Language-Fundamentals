#include<stdio.h>
#include<string.h>

struct Student{
    float cgpa;
    char dept[100];
};

void student_info(struct Student s1){
    
    printf("cgpa = %f \n",s1.cgpa);
    printf("dept = %s \n",s1.dept);
}

int main(){
    struct Student s1 = {6.7 , "ME"};
    student_info(s1);
    
    return 0 ;
}
