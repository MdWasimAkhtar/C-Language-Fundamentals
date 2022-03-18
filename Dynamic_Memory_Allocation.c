#include<stdio.h>
#include<stdlib.h>

void calloc_function();
void Dma();

int main(){
    printf("%d size of int  \n",sizeof(int));
    printf("%d size of char \n ",sizeof(char));
//    calloc_function();
    Dma();
    return 0 ;
}

void calloc_function(){
float *ptr ;
ptr = (float *)calloc(5 ,  sizeof(float));

for(int i =0 ; i< 5 ; i++){
    printf("%.2f \n",ptr[i]);
}

}

void malloc_function(){
    
    int *ptr ;
    ptr =(int *) malloc(5*sizeof(int));
    ptr[0] = 12;
    ptr[1] =122;
    ptr[2] = 13;
    ptr[3] = 14;
    ptr[4] = 16;

    for(int i = 0 ;i < 5 ; i++){
        printf("%d \n",ptr[i] );

    }
}

void Dma(){
    int *ptr ;
    int n ;
    printf("enter n :");
    scanf("%d",&n);

    ptr = (int *) calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
       printf("%d\n",ptr[i]);
    }
    free(ptr);
    printf("ptr size ",sizeof(ptr));
}

/*
malloc()-memory allocation
take a number of byte to be allocated and return a pointer of type void

ptr = (*int)malloc(5*sizeof(int));
----------------------------------------------------
calloc() --> continuous memory allocation
initialize with zero 0;

free()--> we use it to  free memory that is allocated 
using malloc and calloc
free(ptr);

realloc() --> reallocation of memory using the sane pointer and size.
ptr = realloc(ptr , newSize);

*/