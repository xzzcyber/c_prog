#include<stdio.h>
float squareRoot(float n);

int main(){
    float n, x;
    printf("Input The Value - ");
    scanf("%f", &n);
    x = squareRoot(n);
    printf("Square Root Is - %f", x);
    return 0;
}

float squareRoot(float n){
    float sqrt = n / 2;  
    float temp = 0; 
    if(n <= 0){
        printf("Invalid Input");
        return 0; 
    }
    if(n < sqrt){
        
        return 1;
    }
    while (sqrt != temp) {  
        temp = sqrt; 
        sqrt = ( n / temp + temp) / 2; 
            
    }   
    n = sqrt;
    return n;  
}
