#include<stdio.h>
int main(){
    int i, a;
    printf("Enter The Number To Count In Reverse To 0 \n");
    scanf("%d", &a);

    printf("Reverse Counter Is Shown Below \n");
    for(i=a; i>=0; i=i-1){
        printf("%d \n", i);
        
    }
    return 0;
}