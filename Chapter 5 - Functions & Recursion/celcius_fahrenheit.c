#include<stdio.h>

float dig(float cel);

int main(){
    float cel;
    printf("Input A Censius Degree - ");
    scanf("%f", &cel);

    float x = dig(cel);
    printf("The Fahrenheit Degree Is - %f", x);
    return 0;
}

//recursive function
float dig(float fah){
    fah = (fah*9/5) + 32;
    return fah;
} 