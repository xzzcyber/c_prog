#include<stdio.h>

float percentage(float sci, float math, float sans);

int main(){
    float sci, math, sans;
    printf("Input Marks of Science - ");
    scanf("%f", &sci);
     printf("Input Marks of Math - ");
    scanf("%f", &math);
     printf("Input Marks of Sanskrit - ");
    scanf("%f", &sans);

    float x = percentage(sci, math, sans);
    printf("The Total Percentage Is - %f", x);
    return 0;
}

//recursive function
float percentage(float sci, float math, float sans){
    return ((sci + math + sans) /3);
} 