#include<stdio.h>

int sum(int one, int two); 

int main(){
    int one, two;
    printf("Enter 1st Number - ");
    scanf("%d", &one);

    printf("Enter 2nd Number - ");
    scanf("%d", &two);
    
    int n = sum (one, two);
    printf("Sum is : %d", n);
    return 0;
}

int sum(int one, int two){ 
    return one + two;
}