#include<stdio.h>

void _square(int* num); 

int main(){
    int num;
    printf("Enter The Number - ");
    scanf("%d", &num);

    _square(&num);
    printf("The Price Is - %d \n", num);
    return 0;
}

//call by reference
void _square(int* num){
    *num = (*num) * (*num);//value of address * value of address
    printf("The Square Value Is - %d \n", *num);
}