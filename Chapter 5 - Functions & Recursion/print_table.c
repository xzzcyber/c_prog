#include<stdio.h>

void table(int n); 

int main(){
    int one;
    printf("Enter Number - ");
    scanf("%d", &one);
    
    table(one);
    return 0;
}

void table(int one){
    for(int i = 1; i <= 10 ; i++){
        printf("%d \n", one*i);
    }
}