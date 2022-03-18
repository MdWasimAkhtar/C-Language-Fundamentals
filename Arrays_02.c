#include<stdio.h>

void arr(){
     int marks[] = {89,99,92};
    char vowels[] ={'a','e','i','o','u'};

//    printf("%c",vowels.size());
    for(int i = 0 ; i < sizeof(vowels) / sizeof(vowels[0] ); i++){
        printf("%c \n ",vowels[i]);
    }

}

void with_pointer(){
    int age = 33;
    int *ptr = &age;
    printf("ptr = %u \n",ptr);
    ptr++; // means it will increase the size 
    printf("ptr = %u \n ",ptr);
}

void m1(){
    int aadhar[5];

    int *ptr = &aadhar[0];
    
    for(int  i= 0 ; i< sizeof(aadhar)/sizeof(aadhar[0]) ; i++){
        printf("%d index : ",i);
        scanf("%d",(ptr+i)); //&aadhar[i]
    }
    //print()
    for(int i = 0 ; i< sizeof(aadhar)/sizeof(aadhar[0]) ; i++){
        printf("%d index = %d \n",i ,*(ptr+i) );//aadhar[i]
    }
}
int main(){

//   with_pointer();
 //   arr();
 m1();
}