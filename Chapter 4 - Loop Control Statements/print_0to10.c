#include<stdio.h>
int main(){
    int i, a;
    printf("Enter The Number To From 0 To The Number \n");
    scanf("%d", &a);

    printf("Directional Counter Is Shown Below \n");
    for(i=0; i<=a; i=i+1){
        printf("%d \n", i);
        
    }
    return 0;
}