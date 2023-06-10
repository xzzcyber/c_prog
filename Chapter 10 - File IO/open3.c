// Read All Letter One By One From The Targated File
#include<stdio.h>

int main(){
    char ch;
    FILE *fptr;
    fptr = fopen("open.txt", "r");
    if(fptr == NULL){
        printf("file doesn't exist");
    }else{
        ch = fgetc(fptr);
        while(ch != EOF){
            printf("%c", ch);
            ch = fgetc(fptr);
        }
    }
    printf("\n");
    fclose(fptr);
    return 0;
}