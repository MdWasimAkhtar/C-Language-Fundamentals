#include<stdio.h>
#include<string.h>

void str_length();
void str_cpy();

void str_cmp();

int main(){

    char *str_change = "Hello wrold";
    puts(str_change);
    str_change="New world ";
    puts(str_change);

    str_length();
    str_cpy();
    char str[] = "Wasim Akhtar ";
//     str = "MD Wasi";  //  error: assignment to expression with array type can not modify 
    str_cmp();
}

void str_length(){

    char name[] = "MD WASIM AKHTAR";
    int length = strlen(name);
    printf("%d \n",length);
    printf("length = %d \n ",strlen(name));

}

void str_cpy(){
    char name[] = "MD WASIM AKHTAR";
    char new_name [] = "new Name ";
    strcpy(new_name , name);
    printf("%s \n",new_name);
}

void str_cmp(){
    char str1[] = "Delhi";
    char str2[] = "Bangalore";
    printf("%d \n ",strcmp(str1,str2));
}

/*
char *str = "Hello World";
stroe string in the memory and assigned address is stored in the char pointer 'str'

char *str = "New World "; can be reinitialized

char str[] = "Hello world";  // cannot be reinitialized
*/