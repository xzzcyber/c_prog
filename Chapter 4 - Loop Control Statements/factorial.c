#include<stdio.h>
int main(){
    int n, fact = 1;

    printf("Please A Number - ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    printf("Factorial Of %d is %d", n, fact);
    return 0;
}
