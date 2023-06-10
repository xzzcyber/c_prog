#include<stdio.h>

int main(){
    int marks;
    printf("Enter The Marks :");
    scanf("%d", &marks);
    if(marks < 40 && marks >= 0){
        printf("%d Marks Got You An E Grade", marks);
    }else if(marks >= 40 && marks < 50){
        printf("%d Marks Got You An D Grade", marks);
    }else if(marks >= 50 && marks < 60){
        printf("%d Marks Got You An C Grade", marks);
    }else if(marks >= 60 && marks < 75){
        printf("%d Marks Got You An B Grade", marks);
    }else if(marks >= 75 && marks <= 100){
        printf("%d Marks Got You An A Grade", marks);
    }else{
        printf("Invalid Marks");
    }
    return 0;
}