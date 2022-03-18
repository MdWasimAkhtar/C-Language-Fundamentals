#include<stdio.h>

void  reverse();


int main(){
    reverse();
}

void reverse(){
    int arr[] = {12 , 13 , 14  , 15 , 16 , 17 , 18 };
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < length/2 ; i++){
        int firstVal = arr[i];
        int secondVal = arr[length-i-1];
        arr[i] = secondVal;
        arr[length-i-1]  = firstVal; 
    }

        for(int i = 0 ; i < length ; i++){
            printf("%d ",arr[i]);
    }
}