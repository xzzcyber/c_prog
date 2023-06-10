#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Sum Of All Numbers From 5 To 50 \n");

    for(int i = 5; i <= 50; i++){
        sum = sum + i;
    }
    printf("The Total Sum Is - %d \n", sum);

    return 0;
}