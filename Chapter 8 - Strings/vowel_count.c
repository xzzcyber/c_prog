#include<stdio.h>
#include<string.h>
int main(){
    char data[100];

    printf("Enter The Data :- ");
    fgets(data, 100, stdin);

    int counta = 0;
    int counte = 0;
    int counti = 0;
    int counto = 0;
    int countu = 0;
    for(int j = 0; j < strlen(data); j++){
        if(data[j] == 'a'){ counta++; }
        if(data[j] == 'e'){ counte++; }
        if(data[j] == 'i'){ counti++; }
        if(data[j] == 'o'){ counto++; }
        if(data[j] == 'u'){ countu++; }
    }
    printf("a Occures %d Times \n", counta);
    printf("e Occures %d Times \n", counte);
    printf("i Occures %d Times \n", counti);
    printf("o Occures %d Times \n", counto);
    printf("u Occures %d Times \n", countu);
    return 0;
}