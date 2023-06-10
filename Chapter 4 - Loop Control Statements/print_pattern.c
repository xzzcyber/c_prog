#include<stdio.h>
int main(){

    for(int i = 1; i<=20 ; i++){
        printf("*");
        if (i % 5 == 0){
            printf("\n");
        }
    }

    return 0;
}