#include<stdio.h>

void printAddress(int *a);

int main(){
    int n = 4 ;
    printAddress(&n);

    printf("address of n is : %u \n",&n);

}

void  printAddress(int *a ){
    printf("the address : %u \n",a);
}