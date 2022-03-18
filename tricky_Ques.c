#include<stdio.h>
#include<stdlib.h>

void ques();

void main(){
    int arr[3]={1,2,3};
    int *ptr = arr;
    int *ptr2 = &arr[0];   // arr and &arr[0]  both have same address

    printf("%p \n " ,ptr);
    printf("%p \n " , ptr2);

    int **temp = &ptr;

   printf("%p %p \n",*temp , arr); // same address
   printf("%p \n ",&temp);
   ques();
}

void ques(){

    int i ;
    int *ptr = (int *) malloc(5 * sizeof(int));

     printf(" *ptr = %d \n ",*ptr);
    for(i = 0 ; i < 5  ; i++){
        *(ptr + i ) = 100 ;
        printf("%d \n ",(*ptr)++);
        printf("%d \n ",(*ptr)++);
        printf("%d \n",*ptr);
        printf("\n ");
    }
}
/*
int *q = arr;
OR 
int *q = &arr[0];   are same 

*/