#include<stdio.h>

int sum(int n );
int sum2(int n );
int factorial(int n);

int main(){
    printf("sum of N = %d \n ",sum2(10));
    printf("factorial of 10  = %d \n ",factorial(10));

}

int sum(int n ){
    if(n == 1){
        return 1 ;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;

    return sumN;
}

int sum2(int n ){
    if(n == 1 ){
        return 1 ;
    }
    else{
        return sum2(n-1)+n;
    }
}

int factorial(int n){
    if(n == 0 ){
        return  1 ; 
    }
    else{
        return factorial(n-1)*n;
    }
}