#include<stdio.h>
#include<string.h>
int main(){
    char str[100] = "INFINITY";
    for(int j = 0; j < strlen(str)+1; j++){
        for(int i = 0; i < j; i++){
            printf("%c  ", str[i]);
        }
        printf("\n");
    }
    
    return 0;
}