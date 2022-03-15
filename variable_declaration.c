#include<stdio.h>
#include<math.h>
int main(){

    int a = 122;
    int b = a ;
    int c = b + a--;
    int d = d+ c * 10;
    
    int r = 120, e ;

    int  x , y , z ;
    x = y = z = 100;

    int xor = a^2&d; // XOR Operator 
    printf(" xor and and operator is : %d  \n ",xor);

    int power = pow(100,3);
    printf("%d",power);

    int i = 1 ;

    while(i <=100){
        if(i % 2 == 0 && i % 3 == 0 ){
            printf("\n");
            printf("%d",i);
        }
        i++;
    }

    return 0 ;
}

//error: redeclaration of 'a' with no linkage
// note: previous definition of 'a' was here
//error: redeclaration of 'b' with no linkage
//warning: incompatible implicit declaration of built-in function 'pow'
