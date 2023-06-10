#include<stdio.h>
int main(){
    int i, n;

    do{
        printf("Please Enter A Number \n");
        scanf("%d", &n);
        if(n % 2 == 0){
            printf("The Number is Odd or Not A Valid Number \n");
            break;
        }
    } while(n/2);

    return 0;
}
