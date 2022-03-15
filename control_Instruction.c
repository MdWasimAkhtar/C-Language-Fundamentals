#include<stdio.h>


void check(){
    int isMonday = 1 ;
    int isRaining = 0 ;
    printf("If it is  working , it will be a miracle \n");
    if(isMonday && isRaining){
            printf("True \n");
    }
    else{
        printf("False   \n");
    }
    
}

int main(){
    check();
    int x , y = x  ;
    printf("y = %d \n",y);
    printf("%d \n", 4 != 4); // 0 for false
    printf("%d \n",6 != 3);   // 1 for true
    printf("%d \n",6 > 10 | 8<12); // 1 
    printf("%d \n",18 & 22); // 18
    printf("%d \n",10 & 31); // 10
    printf("%d \n",23 & 38); // 6 <adding the same bits >
    printf("%d \n",63 ^ 31);

    return 0 ;
}


/*
1.Sequence Control
2.Decision Control
3.Loop Control
4.Case Control

Operator Precedence
~~~~~~~~~~~~~~~~~~~~~~
   1   ! 

   2   * , / , %

   3   + , -

   4   < ,<= , > , >=

   5  
*/