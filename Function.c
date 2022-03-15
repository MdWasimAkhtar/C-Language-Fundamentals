#include<stdio.h>

//declaration / prototype
void printHello();
float avg();

int main(){
    printf("%d \n",501/50);
    printHello();
    printf("\n");
    printf("the avg : %.3f \n",avg());
}

void printHello(){
    printf("Hello Function \n");
}

float avg(){
    float avg ;
    int sum = 0 ;
    int n = 57;
    for(int i = 1 ; i<=n ; i++){
        sum = sum+i ;
    }
    printf("sum : %d  \n",sum);
    avg = sum/n;
    return avg;
}