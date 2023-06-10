#include<stdio.h>
int main(){
    int from, to, num, c = 0;
    printf("1st Number - ");
    scanf("%d", &from);
    printf("Last Number - ");
    scanf("%d", &to);
    
    for(int i = from; i <= to; i++){
        if (from % to == 0){
            printf("%d \n", i);
            c++;
        }
    }
    return 0;
}