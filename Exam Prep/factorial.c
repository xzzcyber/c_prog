//Write an algorithm to calculate the factorial of given number
#include<stdio.h>

int main(){
    int n, fac = 1;
    printf("Enter A Number :- ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fac = fac * i;
    }
    printf("Factorial of %d is %d", n, fac);
    return 0;
}