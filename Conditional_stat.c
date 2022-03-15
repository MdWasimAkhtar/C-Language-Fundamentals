#include<stdio.h>

void pass_fail(){
    int marks;
    printf("Enter your marks");
    scanf("%d",&marks);
    if(marks>=30?printf("Pass  \n"): printf("fail  \n"));
}

int main(){
    int num ;
    printf("Enter your number ");
    scanf("%d",&num);
    if(num<=9 && num>=0){
        printf("The Number is one digits :  %d ", num);
    }
    else if (num>=9 && num<=99){
        printf("The Number is two ditis : %d \n",num);
    }
    else if (num>=99 && num<=999){
        printf("The Number is three ditis : %d \n",num);
    }
    else{
        printf("Either negative or greater then Four digits");
    }
    pass_fail();
}

