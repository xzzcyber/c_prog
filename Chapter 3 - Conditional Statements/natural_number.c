#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isNaturalNumber(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    char input[100];
    
    printf("Enter a number: ");
    scanf("%s", input);
    
    if (isNaturalNumber(input)) {
        printf("The input is a natural number.\n");
    } else {
        printf("The input is not a natural number.\n");
    }
return 0;
}