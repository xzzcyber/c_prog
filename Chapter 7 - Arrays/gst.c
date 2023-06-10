#include<stdio.h>

int main(){
    float price[3], total, gst, final;

    printf("Insert Price Of Potato - ");
    scanf("%f", &price[0]);

    printf("Insert Price Of Tomato - ");
    scanf("%f", &price[1]);

    printf("Insert Price Of Eggplant - ");
    scanf("%f", &price[2]);

    total = price[0]+price[1]+price[2];
    gst = (total * 0.18);
    final = total + gst;
    printf("Total Invoice Cost :- %f", final);
    return 0;
}