#include<stdio.h>

int isodd(int num);

int main(){
    int num;
    printf("Enter The Number :-");
    scanf("%d", &num);

    printf("%d", isodd(num));
    return 0;
}

int isodd(int num){
    if(num % 2 != 0){
        return 1;
    }else if(num % 2 == 0){
        return 0;
    }
}