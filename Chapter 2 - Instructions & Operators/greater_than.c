#include<stdio.h>

int main(){
    int number; 
    
    printf("Enter The Number ? \n");
    scanf("%d", &number);

    printf("%d", number < 100 && number > 9);
}