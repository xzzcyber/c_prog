#include<stdio.h>

void printHot(){ 
    printf("Its Hot Today !!\n");
}
void printCold(){ 
    printf("Its Cold Today!!\n");
}

int main(){
    int temp;
    printf("Hello!! What Is The Temperature Today ? - ");

    if (scanf("%d", &temp) == 1) {
        if(temp <= 30){
            printCold();
        } else if(temp > 30){
            printHot();
        }
    } else {
        printf("Invalid input! Only Numbers are allowed.\n");
    }
}

