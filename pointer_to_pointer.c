#include<stdio.h>

void pointer_to_pointer(){
    int v =  200;
    int *p = &v;
    int **pptr = &p;
    printf("pointer **pptr = %d \n ",**pptr);
}

int main(){
    pointer_to_pointer();
}

// pointer to pointer 
/*
As we know that, a pointer is used to store the address of a variable in C.
Pointer reduces the access time of a variable. However, In C, we can also
define a pointer to store the address of another pointer. Such pointer is
known as a double pointer (pointer to pointer). The first pointer is used 
to store the address of a variable whereas the second pointer is used to store 
the address of the first pointer. Let's understand it by the diagram given below

int **pptr
char **pptr 

float **ppter

*/