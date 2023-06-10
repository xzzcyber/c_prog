#include<stdio.h>
int main(){
    int num, c = 0;
    printf("Check Prime Number - ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        if (num % i == 0){
            c++;
        }
    }
    if (c == 2){
        printf("%d is a Prime Number", num);
    } else {
        printf("%d is a Not Prime Number", num);
    }
    return 0;
}