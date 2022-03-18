#include<stdio.h>

void printNumber(int arr[] , int n );
int main(){
    int arr[] = {23 ,12 ,34,656 ,89,90};
    printNumber(arr , 6);

}

void printNumber(int arr[] , int n){ // *arr
    for(int i = 0 ; i < n ; i++){
        printf("%d \t ",arr[i]);
    }
}
