#include<stdio.h>

int main(){
    int n; 
    
    printf("Insert A Number To Find Is It Divisible By 2 ? \n");
    scanf("%d", &n);
    
    printf("%d", n % 2 == 0);
}