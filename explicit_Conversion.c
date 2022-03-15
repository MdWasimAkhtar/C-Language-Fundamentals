#include<stdio.h>

int main(){
    printf("Implicit Conversion\n");

    printf("%d \n\n",4+10*5); // 1st Multiplication
    printf("%d \n",(4+10)*5);
    printf("%.2d \n",4*3/7*5);
    printf("%d \n",5+2/2*3);
    return 0 ;
}

/*
Operator precedence
~~~~~~~~~~~~~~~~~~
(), * ,  /   , %  
    |
    ^
   + , - 
    |
    =
Associativity (for same precedence)
   left to right

   x = 4* 3 / 6*10 =(12/6)*10

*/