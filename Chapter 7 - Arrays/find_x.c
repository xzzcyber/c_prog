#include<stdio.h>

int findX(int num[], int n);

int main(){
    int num[6] = {4, 6, 6, 6, 6, 4};
    int find;
    printf("Which Number You Want To Count ? \n");
    scanf("%d", &find);
    printf("%d", findX(num, find));
    return 0;
}

int findX(int num[], int n){
    int count = 0;
    for (int i = 0; i < 6; i++){
        if (num[i] == n){
            count++;
        }
    }
    return count;
}