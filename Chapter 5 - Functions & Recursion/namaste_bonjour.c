#include<stdio.h>

void printNamaste(), printBonjour(); 

int main(){
    char nationality;
    printf("Hello!! Are You Indian or French ? \nEnter i for Indian & f for French \n");
    scanf("%c", &nationality);

    if(nationality == 'i'){
        printNamaste();
    } else if(nationality == 'f'){
        printBonjour();
    } else {
        printf("Invalid Input \n");
    }
   
    return 0;
}

void printNamaste(){ 
    printf("Namaste !!\n");
}
void printBonjour(){ 
    printf("Bonjour !!\n");
}