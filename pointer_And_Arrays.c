#include<stdio.h>

void pointer();
void array();
int Array2();

int main(){
//    pointer();
//      array();
      Array2();
}

void array(){
    int i , x[6] , sum = 0 ;

    printf("Enter 6 number ");

    for(int i = 0 ; i < sizeof(x)/sizeof(x[0]) ; ++i ){
        scanf("%d",x+i);
        //equivalent to ("%d",&x[i])

        sum += *(x+i);
    }
    printf("Sum = %d", sum);
}

void pointer(){
    int zz = 899;

    int *s = &zz;
    printf("zz = %d \n",zz);
    printf(" &s = %d \n",&s);
    printf(" s = %d \n",s);
    printf("&zz = %d \n",&zz);
    printf("*s =  %d \n",*s);
}


int Array2() {

  int x[5] = {1, 2, 3, 4, 5};
  int* ptr;

  // ptr is assigned the address of the third element
  ptr = &x[2]; 

  printf("*ptr = %d \n", *ptr);   // 3
  printf("*(ptr+1) = %d \n", *(ptr+1)); // 4
  printf("*(ptr-1) = %d", *(ptr-1));  // 2

  return 0;
}