#include<stdio.h>

int main(){

    char firstName[] = "Pankaj";
    char lastName[] = "Debnath";

    for(int i=0; firstName[i] != '\0'; i++){
        printf("%c", firstName[i]);
    }
    printf("\t");
    for(int i=0; lastName[i] != '\0'; i++){
        printf("%c", lastName[i]);
    }

    return 0;
}