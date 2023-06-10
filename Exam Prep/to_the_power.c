#include<stdio.h>
int power(int num);

int main(){
    int num, total;
    printf("Enter The Number :- ");
    scanf("%d", &num);
    total = power(num);
    printf("Total is :- %d", total);
    return 0;
}

int power(int num){
    int total = 0;
    int temp = 1;
    for (int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            temp = temp * i;
        }
        total = total + temp;
    }
    return total;
}