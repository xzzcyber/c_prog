#include<stdio.h>

int oddNumbers(int num[], int n);

int main(){
    int num[6] = {1, 2, 3, 4, 5, 6};
    printf("%d", oddNumbers(num, 6));
    return 0;
}

int oddNumbers(int num[], int n){
    int count = 0;
    for (int i=0; i<n; i++){
        if (num[i] % 2 != 0){
            count++;
        }
    }
    return count;
}