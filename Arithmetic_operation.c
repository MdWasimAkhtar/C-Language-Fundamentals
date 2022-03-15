#include<stdio.h>

int main(){

    int a , b = 12 ;
    a = 1^12 ;
    printf(" Xor , a = %d",a );
    int x ;
    x = 100&12 ;
    printf("\n");
    printf("& operator  ,  x = %d \n  \n",x);

    //
    int  a_2= 33^19;
    printf(" Xor , a_2 = %d",a_2 );
    int x2 ;
    x2 = 56&16 ;
    printf("\n");
    printf("& operator  ,  x2 = %d ",x2);


    return 0 ;
}

//error: expected identifier or '(' before numeric constant
/*
n 
0 XOR 1: 1
1 XOR 0: 1
1 XOR 1: 0

and & operator

As a Relational Operator: & is used as a relational operator to check a conditional
 statement just like && operator. Both even give the same result, i.e. true if all
  conditions are true, false if any one condition is false.
However, there is a slight difference between them, which highlights the
 functionality of & operator:

&& operator: It only evaluates the next condition, if the condition before it is true.
If anyone condition is false, it does not evaluate the statement any further.

& operator: It evaluates all conditions even if they are false. Thus, any change
in the data values due to the conditions will only be reflected in this case.
0 & 1 = 0 
1 & 0 = 0 
0 & 0 = 0 
1 & 1 = 1

*/






