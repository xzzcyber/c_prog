#include<stdio.h>

int main(){
    char num1 = 'A', num2 = 'Z';

    char *ptr1 = &num1;
    char *ptr2 = &num2;

    for(int i = *ptr1; i <= *ptr2; i++){
        printf("%c\n", i);
    }

    return 0;
}