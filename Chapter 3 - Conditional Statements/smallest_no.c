#include<stdio.h>

int main(){
    int number1, number2, small; 
    
    printf("Enter The 1st Number \n");
    scanf("%d", &number1);

    printf("Enter The 2nd Number \n");
    scanf("%d", &number2);
    
    small = (number1<number2) ? number1 : number2;

    printf("The Smallese No Among These Numbers are %d", small);
}