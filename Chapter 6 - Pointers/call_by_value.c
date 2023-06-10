#include<stdio.h>

void square(int num); 

int main(){
    int num;
    printf("Enter The Number - ");
    scanf("%d", &num);
    square(num);
    printf("The Price Is - %d \n", num);
    return 0;
}

//call by value
void square(int num){
    num = num * num;
    printf("The Square Value Is - %d \n", num);
}