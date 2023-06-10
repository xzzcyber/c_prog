//Write an algorithm to find the largest number 
//among 3 numbers given as input.
#include<stdio.h>

int main(){
    int a, b, c, x;
    printf("Enter 1st Number :- ");
    scanf("%d", &a);
    printf("Enter 2nd Number :- ");
    scanf("%d", &b);
    printf("Enter 3rd Number :- ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("1st Number %d Is The Largest Number", a);
    } else if(b>a && b>c){
        printf("2nd Number %d Is The Largest Number", b);
    } else if(c>a && c>b){
        printf("3rd Number %d Is The Largest Number", c);
    }



}