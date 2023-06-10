#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter 1st Number - ");
    scanf("%d", &num1);
    printf("Enter 2nd Number - ");
    scanf("%d", &num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int chng = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = chng;
    
    printf("The 1st Value Is - %d \n", *(&num1));
    printf("The 2nd Value Is - %d \n", *(&num2));

    return 0;
}