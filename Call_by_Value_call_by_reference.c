#include<stdio.h>

void change(int num);

void call_byRefrence(int *y);

int main(){
    int x = 1000;
    printf("Before function call x = %d \n",x);
    change(x); 
    printf("After function call x = %d \n",x);

    printf("Call By refernece \n\n");
    int y= 103 ;
    printf("before y = %d \n",y);
    call_byRefrence(&y);
    printf("After y = %d \n",y);
    return 0 ;
}

void change(int num){
   printf("Before adding value num = %d \n ",num);
   num = num+100;
   printf("after adding value num = %d \n",num);
}

/*
In call by value method, the value of the actual parameters is copied into the formal parameters.
 In other words, we can say that the value of the variable is used in the function call in the 
 call by value method.
In call by value method, we can not modify the value of the actual parameter by the formal parameter.
In call by value, different memory is allocated for actual and formal parameters since the value
 of the actual parameter is copied into the formal parameter.

The actual parameter is the argument which is used in the function call whereas formal parameter is the argument which is used in the function definition.
*/

/*
In call by reference, the address of the variable is passed into the function call
 as the actual parameter.
The value of the actual parameters can be modified by changing the formal parameters
 since the address of the actual parameters is passed.

In call by reference, the memory allocation is similar for both formal parameters
 and actual parameters. All the operations in the function are performed on the value
  stored at the address of the actual parameters, and the modified value gets stored at
   the same address.
*/

void call_byRefrence(int *y){

    printf("Before adding value inside function y  = %d \n",*y );
    (*y) += 100;
    printf("after  adding value inside function y  = %d \n",*y );


}