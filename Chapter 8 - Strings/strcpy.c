#include<stdio.h>
#include<string.h>

int main(){

    char fullName[100], newName[100];

    printf("Enter Old Data :- ");
    fgets(fullName, 100, stdin);

    puts(fullName);

    printf("Enter The Data :- ");
    fgets(newName, 100, stdin);

    puts(newName);
    
    strcpy(newName, fullName);

    puts(newName);

    return 0; 
}