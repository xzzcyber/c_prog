#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number To Print Table - ");
    scanf("%d", &n);

    printf("Table Is Shown Below \n");
    for(int i = 1; i <= 10 ; i++){
        printf("%d \n", n*i);
    }
    return 0;
}