#include<stdio.h>

void looping(){
    for(int i = 'a' ; i<='z' ; i++){
        printf("%c  :  %d \n",i , i);
    }

    for(int  i = 'A' ; i<='Z' ;i++){
        printf("%c :  %d \n",i , i );
    }
}
void checkprime(int x ){
    int count = 0  ;
    for(int i = 1 ; i <=x ; i++){
        if(x % i == 0 ){
            count++;
        }
    }
 //   printf("count : %d \n",count);

    if(count == 2 ){
        printf(" %d \n",x);
    }
}

int main(){

//    looping();
    for(int i = 233 ; i <=344 ; i++){
        checkprime(i);
    }
}


//warning: comparison between pointer and integer