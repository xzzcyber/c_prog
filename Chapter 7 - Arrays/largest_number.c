#include<stdio.h>

int main(){
    int num[3] = {11, 33, 55};
    int value = num[0];

    for (int i = 0; i < 3; i++){
        if (value < num[i]){
            value = num[i];
        }
    }

    printf("%d", value);
    return 0;
}