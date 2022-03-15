#include<stdio.h>

int main(){
    int age = 22;

    int *wasim = &age;

    int _age = *wasim;  // *wasim is pointer 

    printf("%d \n",_age);
    printf("pointer *wasim  : %d \n",*wasim);

    //address
    printf("address of age : %p \n ",&age);
    printf("address  of *wasim : %p \n ",&wasim);

    //value 
    printf("%d \n ",*(&age));

    printf("%d \n ",&age);
//--------------------------
    int *ptr ;
    int x = 12;

    ptr = &x ;

    *ptr = 0 ;
    printf("x = %d \n ",x );
    printf("*ptr = %d \n ",*ptr);

    *ptr += 5 ;
    printf("x = %d \n",x);
    printf("*ptr = %d \n ",*ptr);


}

// * pointer stored the address of a variable
// address at 

// & address of 

/*
    Declaring Pointer 

    int *ptr 

    char *pointer

    float *var_c

    format specifier  [  %p ] pointer address 
    %u - unsigned int


*/