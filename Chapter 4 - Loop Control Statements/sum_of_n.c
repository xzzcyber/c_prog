#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter The Number To Do The Sum - ");
    scanf("%d", &n);

    int i = 1;
    while(i<=n){
        sum = sum+i;
        i++;
    }
    printf("The Total Sum Is - %d \n", sum);

    printf("Reverse Counter Is Shown Below \n");
    for(i=n; i>=1; i=i-1){
        printf("%d \n", i);
        
    }
    return 0;
}