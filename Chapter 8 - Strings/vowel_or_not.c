#include<stdio.h>
int main(){
    char data;

    printf("Enter The Data :- ");
    scanf("%c", &data);

    if (data == 'a' || 
            data == 'e' || 
            data == 'i' || 
            data == 'o' || 
            data == 'u' || 
            data == 'A' || 
            data == 'E' || 
            data == 'I' || 
            data == 'O' || 
            data == 'U'){
            printf("Entered Data Is A Vowel");
        } else {
            printf("Entered Data Is Not A Vowel");
        }
    return 0;
}