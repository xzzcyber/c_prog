#include<stdio.h>
#include<string.h>
int main(){
    char password[100];

    printf("Enter The Password :- ");
    //scanf("%s", password); only for single words
    fgets(password, 100, stdin);
    password[strcspn(password, "\n")] = '\0';

    char salt[] = "123";
    strcat(password, salt);

    puts(password);
}