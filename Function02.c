#include<stdio.h>

void calculatePrice(float val);


int main(){
    float value = 100.0;
    calculatePrice(value);
    printf("val is : %f ",value);
}

void calculatePrice(float val){
    val = val+(0.18*val );
    printf("final price : %f \n ",val);
}

//Function can only return one  value at a time;

// change to the parameter in the function doesnot change the value in the calling function
// becaue a copy of argument is passed to the function