#include<stdio.h>

int main(){
    int sub[2][3];

    printf("Insert Marks Of 1st Subject Of 1st Student - ");
    scanf("%d", &sub[0][0]);
    printf("Insert Marks Of 2nd Subject Of 1st Student - ");
    scanf("%d", &sub[0][1]);
    printf("Insert Marks Of 3rd Subject Of 1st Student - ");
    scanf("%d", &sub[0][2]);
    printf("Insert Marks Of 1st Subject Of 2nd Student - ");
    scanf("%d", &sub[1][0]);
    printf("Insert Marks Of 2nd Subject Of 2nd Student - ");
    scanf("%d", &sub[1][1]);
    printf("Insert Marks Of 3rd Subject Of 2nd Student - ");
    scanf("%d", &sub[1][2]);

    printf("1st Subject Of 1st Student :- %d \n", sub[0][0]);
    printf("2nd Subject Of 1st Student :- %d \n", sub[0][1]);
    printf("3rd Subject Of 1st Student :- %d \n", sub[0][2]);
    printf("1st Subject Of 2nd Student :- %d \n", sub[1][0]);
    printf("2nd Subject Of 2nd Student :- %d \n", sub[1][1]);
    printf("3rd Subject Of 2nd Student :- %d \n", sub[1][2]);
    return 0;
}