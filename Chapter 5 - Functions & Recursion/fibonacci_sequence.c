#include<stdio.h>

int fib(int num);

int main(){
    printf("%d", fib(6));
    return 0;
}

//recursive function
int fib(int num){
    if(num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    
    int fibNm1 = fib(num-1);
    int fibNm2 = fib(num-2);
    int fibN = fibNm1 + fibNm2;
    //printf("Fib of %d is %d \n", num, fibN);
    return fibN;
}