#include<stdio.h>

void writing_to_file();

int main(){
    FILE *fptr ;
    fptr = fopen("c_file.txt","r");

    char ch ;
    fscanf(fptr,"%c",&ch);
    printf("%c \n ",ch);

    if(fptr == NULL){
        printf("file doesnot exist");
    }
    else{
        fclose(fptr);
    }

    writing_to_file();
}

void writing_to_file(){
    FILE *fptr ;
    fptr = fopen("c_file.txt","a");
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');

}

/*
File is a hidden structure that needs to be created for opening a file

FIle ptr that points to this structure and is used to access the file

fopen("filename",mode)

in write mode if file doesnot exist new file will be created 

fscanf(filePointer,fileformatting , Address);
fscanf();

for writing to file 
fprintf();
*/