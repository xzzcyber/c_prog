#include<stdio.h>

int main(){
    int number1, number2, number3; 
    
    printf("Enter The 1st Number \n");
    scanf("%d", &number1);

    printf("Enter The 2nd Number \n");
    scanf("%d", &number2);

    printf("Enter The 3rd Number \n");
    scanf("%d", &number3);

    printf("%d", (number1+number2+number3)/3 );
}