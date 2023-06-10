#include<stdio.h>

int factorial(int num);

int main(){
    int num;
    printf("Input A Number - ");
    scanf("%d", &num);

    int x = factorial(num);
    printf("The Sum Is - %d", x);
    return 0;
}
 
//recursive function
int factorial(int num){
    if(num == 1){
        return 1;
    }
    int factNm1 = factorial(num-1);
    int factN = factNm1 * num;
    return factN;
}