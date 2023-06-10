#include<stdio.h>

void generaterange(int from, int to);

int main(){
    int from, to;
    printf("Enter Starting Number :-");
    scanf("%d", &from);
    printf("Enter Ending Number :-");
    scanf("%d", &to);

    generaterange(from, to);
    return 0;
}

void generaterange(int from, int to){
    for(int i = from; i <= to; i++){
        printf("%d \t", i);
    }
}