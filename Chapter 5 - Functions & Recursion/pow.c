#include<stdio.h>

float ppow(float num, float power);

int main(){
    float num, power;
    printf("Input A Number - ");
    scanf("%f", &num);
    printf("Input The Power - ");
    scanf("%f", &power);

    float x = ppow(num, power);
    printf("The Power Of The Number Is - %f", x);
    return 0;
}

//recursive function
float ppow(float num, float power){
    if(power == 1){
        float f = printf("111");
        return f;
    }
    if(power == 0){
        float f = printf("000");
        return f;
    }
    if(power < 0){
        float f = printf("222");
        return f;
    }
}



/*
#include <stdio.h>
#include <math.h>

int main(){
double num, power, ans;

printf("Please enter your number :- ");
scanf("%lf", &num);
printf("Please enter the power :- ");
scanf("%lf", &power);

ans = pow(num, power);
printf("The Ans Is - %lf", ans);

return 0;
}
*/