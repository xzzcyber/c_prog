#include<stdio.h>

int main(){
    int age;
    printf("Enter The Age \n");
    scanf("%d", &age);

    if(age>=18 && age<=40){
        printf("You Are a Man");
    } else if(age>40 && age<=80){
        printf("You Are Old");
    } else if(age>80){
        printf("You Should Be Dead, Go Die");
    }
    else{
        printf("You Are A Kid, Go Buy Yourself A Toffie");
    }
}