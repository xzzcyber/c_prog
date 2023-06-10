#include<stdio.h>

int main(){

    int marks[10];
    int looser, topper;
    
    printf("Enter The Data :- ");
    
    for (int i = 0; i < 10; i++){
        scanf("%d", &marks[i]);
    }
    looser = marks[0];
    for (int i = 0; i < 10; i++){
        if(looser > marks[i]){
            looser = marks[i];
        }
    }
    topper = marks[0];
    for (int i = 0; i < 10; i++){
        if(topper < marks[i]){
            topper = marks[i];
        }
    }

    printf("The Lowest Marks Is :- %d \n", looser);
    printf("The Highest Marks Is :- %d", topper);
    return 0;
}