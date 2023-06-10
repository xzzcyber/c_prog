#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number To Start The Count \n");
    scanf("%d", &n);

    printf("Print The Numbers From 1 to The Number\n");
    int i = 0;
    while(i<=n){
        printf("%d \n", i);
        i++;
    }
    return 0;
}