#include<stdio.h>
#include<stdlib.h>

void q1();
void q2();
void q3();
void q4();
void tree(char **p);

int main(){
    q4();
}

void q1(){
    
    int a[][2] = {1,2,3,4,5,6};
    int (*ptr)[2] = a;
    printf("%d   %d \n",(*ptr)[1],(*ptr)[2]);

    ++ptr;
    printf("%d    %d",(*ptr)[1],(*ptr)[0]);
}

void q2(){
    char *ptr = "Technology";
    printf("%c",*&*&*&*ptr);

}

void q3(){
    int *p = (int * )malloc(sizeof(int));

    printf("%d \n",*p);

    p = NULL;
    printf("%d \n",p);
    free(p);

    printf("%d \n",p);

}

void q4(){
    char *argv[] = {"a","b","c","d"};
    tree(argv);
   
}

void tree(char **p){
    char *m;
    m = (p+= sizeof(int ))[-2];
    printf("%s",m);
}