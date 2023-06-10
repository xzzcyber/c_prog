#include<stdio.h>

int NaturalNumber(int num);

int main(){
    int num;
    printf("Input A Number - ");
    scanf("%d", &num);

    int x = NaturalNumber(num);
    printf("The Sum Is - %d", x);
    return 0;
}

//recursive function
int NaturalNumber(int num){
    if(num == 1){
        return 1;
    }
    int sumNm1 = NaturalNumber(num-1);
    int sumN = sumNm1 + num;
    return sumN;
}