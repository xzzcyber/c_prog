#include<stdio.h>
#include<string.h>
int main(){
    char data[100];
    char newData[100];
    int n = 3, m = 6;

    printf("Enter The Data :- ");
    fgets(data, 100, stdin);

    for(int i = n, j = 0; i <= m; i++, j++){
        newData[j] = data[i];
    }
    puts(newData);
}