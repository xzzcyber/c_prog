#include<stdio.h>

void printHello(); //Declaration/prototype

int main(){
    printHello(); //Function Call
    return 0;
}

void printHello(){ //Function Definition
    printf("Hello World");
}