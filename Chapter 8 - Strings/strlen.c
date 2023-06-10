#include<stdio.h>
#include<string.h>

int main(){

    char fullName[100];

    printf("Enter The Data :- ");
    fgets(fullName, 100, stdin);

    puts(fullName);
    
    int cout = strlen(fullName);
    printf("%d", cout-1);
    return 0; 
}