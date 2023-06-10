#include<stdio.h>
int main(){
    int a = 3, b = 5, c;
    c = a;
    a = b;
    b = c;
    printf("1st - %d, 2nd - %d", a, b);
}