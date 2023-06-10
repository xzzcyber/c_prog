#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter The Value :-");
    fgets(str, 100, stdin);

    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
            count++;
    }
    printf("The Length Of The Siring Is :- %d", count-1);
    return 0;
}