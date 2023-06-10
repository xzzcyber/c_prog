#include<stdio.h>

void prog(int num1, int  num2, int *sum, int *product, int *average); 

int main(){
    int num1, num2, sum, product, average;
    printf("Enter 1st Number - ");
    scanf("%d", &num1);
    printf("Enter 2nd Number - ");
    scanf("%d", &num2);

    prog(num1, num2, &sum, &product, &average);

    printf("The Sum Value Is - %d \n", sum);
    printf("The Product Value Is - %d \n", product);
    printf("The Average Value Is - %d \n", average);

    return 0;
}

//call by reference
void prog(int num1, int num2, int *sum, int *product, int *average) {

    *sum  = num1 + num2;
    *product = num1 * num2;
    *average = (num1 + num2) / 2;
}