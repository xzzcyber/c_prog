#include<stdio.h>

void swap(int* num, int* num2); 

int main(){
    int num1, num2;
    printf("Enter 1st Number - ");
    scanf("%d", &num1);
    printf("Enter 2nd Number - ");
    scanf("%d", &num2);

    swap(&num1, &num2);
    
    printf("The 1st Value Is - %d \n", num1);
    printf("The 2nd Value Is - %d \n", num2);

    return 0;
}

//call by reference
void swap(int* num1, int* num2){
    int chng = *num2;
    *num2 = *num1;
    *num1 = chng;
}