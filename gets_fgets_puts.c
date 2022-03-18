#include<stdio.h>


int main(){

    char str[100];
    //gets(str);
    printf("Enter your string ");
    fgets(str , 100 , stdin);
    puts(str);

}



/*
gets(str) -- input a string even multi word (deprecated)

fgets(str , n , file ) --stops when n-1 char input or new line is entered

puts - output s string
*/