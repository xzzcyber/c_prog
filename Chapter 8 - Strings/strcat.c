#include<stdio.h>
#include<string.h>

int main(){

    char firstName[100], lastName[100];

    printf("Enter Old Data :- ");
    fgets(firstName, 100, stdin);

    puts(firstName);

    printf("Enter The Data :- ");
    fgets(lastName, 100, stdin);

    puts(lastName);

    strcat(firstName, lastName);

    puts(firstName);
    

    return 0; 
}