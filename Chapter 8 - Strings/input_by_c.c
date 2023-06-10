#include<stdio.h>
int main(){
    int i = 0;
    char size, str[100];

    printf("Enter The Elements Of The String :- \n");
    while (size != '\n')
    {
        scanf("%c", &size);
        str[i] = size;
        i++;
    }
    str[i] = '\0';
    puts(str);
}