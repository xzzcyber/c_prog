#include<stdio.h>

void printHello(), printGoodBye(); 

int main(){
    printHello();
    printGoodBye();
    return 0;
}

void printHello(){ 
    printf("Hello World !!\n");
}
void printGoodBye(){ 
    printf("Good Bye World ;)\n");
}