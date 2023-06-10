#include<stdio.h>

int revreseArray(int num[], int n);

int main(){
    int num[4] = {1, 2, 3, 4};
    printf("%d - %d - %d - %d \n", num[0],num[1],num[2],num[3]);
    revreseArray(num, 4); // Function Call
    printf("%d - %d - %d - %d \n", num[0],num[1],num[2],num[3]);
    return 0;
}

int revreseArray(int num[], int n){
    for (int i=0; i<n/2; i++){
        int firstValue = num[i];
        int secondValue = num[n-i-1];
        num[i] = secondValue;
        num[n-i-1] = firstValue;
    }
}