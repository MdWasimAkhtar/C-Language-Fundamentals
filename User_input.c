#include<stdio.h>

int main(){

    int age ;
    printf("Enter your age");
    printf("\n");
    scanf("%d",&age);
    printf("age = %d  \n",age);
    if(age>=18){
        printf("eligible for voting %d ", age);
    }
    else{
        printf("Not eligible for voting becaue %d %s",18-age," more year is required");

    }

    return 0;
}

//warning: comparison between pointer and integer
// error: invalid type argument of unary '*' (have 'int')