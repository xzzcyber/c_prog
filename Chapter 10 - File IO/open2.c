//Multiple Integer Read From A File
#include<stdio.h>

int main(){
    int num;
    FILE *fptr;
    fptr = fopen("open.txt", "r");
    
    if(fptr == NULL){
        printf("file doesn't exist");
    }else{
        for(int i = 0; i < 10; i++){
            fscanf(fptr, "%d", &num);
            printf("%d \t", num);
        }
        fclose(fptr);
    }
    return 0;
}