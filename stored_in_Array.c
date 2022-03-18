#include<stdio.h>
#include<string.h>

void input_str();
void input_into_array();
void aadhar_arr();

int main(){
    input_into_array();
//      aadhar_arr();
}

void input_str(){
    char str[100] = {};
    printf("Enter str ");
    for(int i =0  ; i < 5 ; i++){
        gets(&str[i]);
    }
    printf("%s",str);
}

void input_into_array(){
    char names[100] ;
    char *ptr = &names[0];

    for(int i = 0 ; i < 4 ; i++){
        printf("%d index :",i);
//        scanf("%s",(ptr+i));
        fgets(names , 100 , stdin);
    }

    for(int i = 0 ; i < names[i] !='\0' ; i++){
        printf("%c",names[i]);
    }
    printf("%c",names[2]);
}

void aadhar_arr(){
    int aadhar[5];
    int *ptr = &aadhar[0];
    for(int i = 0 ; i<4 ; i++){
        printf("%d index : ",i);
        scanf("%d",(ptr+i)); //&aadhar[i]
    }

    for(int i = 0 ; i < 4 ; i++){
        printf("%d index = %d \n",i , *(ptr+i));
    }
}