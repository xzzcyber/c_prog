#include<stdio.h>
#include<string.h>

int main(){

    char firstName[100], lastName[100];

    printf("Enter Old Data :- ");
    fgets(firstName, 100, stdin);
    printf("Enter The Data :- ");
    fgets(lastName, 100, stdin);

    int a = strcmp(firstName, lastName);
    printf("%d", a);

    return 0; 
}