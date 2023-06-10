//Single Charecter Read From A File
#include<stdio.h>

int main(){
    char ch;
    FILE *fptr;
    fptr = fopen("open.txt", "r");
    if(fptr == NULL){
        printf("file doesn't exist");
    }else{
        fscanf(fptr, "%c", &ch);
        printf("charecter = %c", ch);
        fclose(fptr);
    }
    return 0;
}