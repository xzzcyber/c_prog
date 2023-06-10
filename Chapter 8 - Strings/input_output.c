#include<stdio.h>

int main(){

    char fullName[100];

    printf("Enter The Data :- ");
    fgets(fullName, 100, stdin);

    puts(fullName);

    int count = 0;
    for (int i = 0; fullName[i] != '\0'; i++){
            count++;
    }
    printf("%d", count-1);
    return 0;
}