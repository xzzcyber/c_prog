#include<stdio.h>

void storeTables(int arr[][10], int n, int m, int num);

int main(){
    int tables[2][10];

    storeTables(tables, 0, 10, 2);
    storeTables(tables, 1, 10, 3);

    for(int i=0; i<10; i++){
        printf("%d \t", tables[0][i]);
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf("%d \t", tables[1][i]);
    }

    return 0;
}

void storeTables(int arr[][10], int n, int m, int num){
    for(int i=0; i<m; i++){
        arr[n][i] = num * (i+1);
    }
}
