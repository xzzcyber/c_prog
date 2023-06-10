#include<stdio.h>

int main(){
    int n;
    printf("enter number :- ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    
    printf("%d\t%d", fib[0], fib[1]);
    for(int i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("\t %d", fib[i]);
    }
    
    return 0;
}

