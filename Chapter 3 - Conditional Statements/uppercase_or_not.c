#include <stdio.h>
int main(){
    char uppercase;
    printf("Enter any of The Values (a-z,A-Z) \n");
    scanf("%c", &uppercase);

    if(uppercase >= 'A' && uppercase <= 'Z'){
        printf("This is a uppercase charracter");
    } else if(uppercase >= 'a' && uppercase <= 'z'){
        printf("This is Lowercase charecter");
    } else {
        printf("Not A Valid Charracter");
    }
}