#include<stdio.h>

float areaSquare(float square);
float areaCircle(float circle);
float areaRectangle(float a, float b);

int main(){
    float a = 5, b = 10;
    printf("The Area Of Rectangle Is - %f \n", areaRectangle(a, b));

    float square = 10;
    printf("The Area Of Square Is - %f \n", areaSquare(square));

    float circle = 5;
    printf("The Area Of Circle Is - %f \n", areaCircle(circle));

    return 0;
    printf("Thank You For Using The Program !!)");
}

float areaSquare(float square){
    return square * square;
}
float areaCircle(float circle){
    return 3.14 * circle * circle;
}
float areaRectangle(float a, float b){
    return a * b;
}