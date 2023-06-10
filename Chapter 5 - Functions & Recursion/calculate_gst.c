#include<stdio.h>

void gst(float price); 

int main(){
    float price;
    printf("Enter The Price - ");
    scanf("%f", &price);
    
    printf("The Price Is - %f \n", price);
    gst(price);
    return 0;
}

void gst(float price){
    
    price = price + (0.18*price);
    printf("The GST Added Price Is %f", price);
}