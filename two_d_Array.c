#include<stdio.h>

void two_d_arr();
int odd_count(int arr[] , int n  );
void array();

int main(){
    int arr[] = {12 , 35 ,89,44,1222772  ,56  };

    int length = (sizeof(arr)/sizeof(arr[0]));
    two_d_arr();

    printf("odd count = %d  \n ",odd_count(arr , length));

    array();


}

void two_d_arr(){
    //2 x 3 

    int marks[2][3] ;

    marks[0][0] = 44;
    marks[0][1] = 66;
    marks[0][2] = 78;

    marks[1][0] = 67;
    marks[1][1] = 78;
    marks[1][2] = 55;

 for(int i=0 ; i < 2 ; i++){
     for(int j = 0 ; j<3 ; j++){
         printf("%d ",marks[i][j]);
     }
     printf("\n");
 }   
}

// function to count odd number in array

int  odd_count(int arr[] , int length){
    int count = 0 ;
    
    for(int i = 0 ; i < length ;i++){
        if(arr[i] % 2 != 0 ){
            count++;
        }
    }
    return count;
}

void array(){
    int arr[] = {1000,23,45, 89, 0, 23 };
    printf(" *arr = %d \n",*arr);

    printf(" *(arr+2) = %d \n ",*(arr+2));
    printf(" *(arr+10) = %d \n ",*(arr+6));
}