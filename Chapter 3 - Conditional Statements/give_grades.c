#include<stdio.h>

int main(){
    int marks;
    printf("Enter The Marks \n");
    scanf("%d", &marks);

    if(marks<30 && marks<100 && marks>0){
        printf("C");
    } else if(marks >= 30 && marks>0 && marks<70 ){
        printf("B");
    } else if(marks >=70 && marks>0 && marks<90){
        printf("A");
    } else if(marks >=90 && marks>0 && marks<=100){
        printf("A+");
    } else{
        printf("Wrong Marks");
    }
}