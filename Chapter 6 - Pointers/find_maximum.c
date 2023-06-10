#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter 1st Number - ");
    scanf("%d", &num1);
    printf("Enter 2nd Number - ");
    scanf("%d", &num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    if(*ptr1 > *ptr2){
        printf("The %d Is The Bigger Value \n", *ptr1);
    } else if(*ptr1 < *ptr2){
        printf("The %d Is The Bigger Value \n", *ptr2);
    } else if(*ptr1 == *ptr2){
        printf("Both Values Are Same");
    } else{
        printf("Invalid Input");
    }

    return 0;
}