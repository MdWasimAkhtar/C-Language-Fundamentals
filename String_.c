#include<stdio.h>

void string_();
void printString(char arr[]);

int main(){
    string_();
}

void string_(){
    char name[] = {'w','a','s','i','m'};
    printf("size of name = %d \n",sizeof(name));
    printf("%c \n ",name[4]);

    char firstName[] = "Windy";
    char lastName[] = "Larson";
    printString(firstName);

}

void printString(char arr[]){
    for(int i = 0 ; arr[i] != '\0' ;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}

/*
A character array terminated by '\0' (null character)
null character denotes String termination

*/ 