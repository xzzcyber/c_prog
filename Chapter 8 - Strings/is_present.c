#include<stdio.h>
#include<string.h>

void found(char data[], char find);

int main(){
    char data[100], find;

    printf("Enter The Data :- ");
    fgets(data, 100, stdin);

    printf("Which Word You Want To Find :- ");
    scanf("%c", &find);

    found(data, find);
}

void found(char data[], char find){
    for(int j = 0; j < strlen(data); j++){
        if (data[j] == find){
            printf("The Word Is Available");
            return;
        }
    }
    printf("The Word Is Not Found");
}

/*
#include <stdio.h>
#include<string.h>
int main() {
    char str[] = "Blowjob hurts";
    printf("Blowjob hurts");
    char ch;
    printf ("Type a letter to find");
    scanf("%c", &ch);
    char *ptr;
    ptr = strchr(str,ch);
    if(ptr!=NULL) {
        printf ("found");
    } else {
        printf("not found");
    }
return 0;
}*/