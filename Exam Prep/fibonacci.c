#include<stdio.h>

int fibo(int n);

int main(){
    printf("%d", fibo(5));
    return 0;
}

int fibo(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fibN1 = fibo(n-1);
    int fibN2 = fibo(n-2);
    int fibN = fibo(n-1) + fibo(n-2);
    return fibN;
}