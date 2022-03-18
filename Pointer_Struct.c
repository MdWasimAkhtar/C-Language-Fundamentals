#include<stdio.h>
#include<string.h>

/*
  -> arraow operator 
*/

struct Laptop{
    int ramsize;
    char name[20];
    char company[20];
};

int main(){
    struct Laptop l1 = {8 , "PLASMA","DELL"};

    struct Laptop *ptr = &l1;
    printf("ram size : %d \n",(*ptr).ramsize);
    printf("name : %s \n",(*ptr).name);
    printf("company Name  : %s \n",ptr->company);


}


