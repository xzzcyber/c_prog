#include<stdio.h>

void HelloWorld(int count);

int main(){
    HelloWorld(5);
    return 0;
}

//recursive function
void HelloWorld(int count){
    if(count == 0){
        return;
    }
    printf("Hello World \n");
    HelloWorld(count - 1);
}