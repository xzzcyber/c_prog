#include<stdio.h>

int main(){
    char a;
    printf("Hello!! Check Validation Of Input Type ? - ");

    if (scanf("%c", &a) == 1) {
        printf("Valid Input\n");
    } else {
        printf("Invalid input!\n");
    }
}