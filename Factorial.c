#include<stdio.h>

void fact(){
    int fact =1 ;
    int i = 1;
    while(i<=10){
        fact = fact*i ;
        printf("factorial of %d is  : %d \n",i , fact);
        i++;
    }
}
void fact2(){
    int fact = 1  ;
    for(int i = 1 ; i <=10 ; i++){
        fact = fact*i;
        printf("factorial of %d is  : %d \n",i , fact);
    }
}
int main(){
    fact();
}